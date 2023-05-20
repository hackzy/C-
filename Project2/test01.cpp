#include <iostream>
#include<string>
#include <winsock2.h>

using namespace std;
void mystr(char*str);
int main() {
	string str ;
	//str[9] = '\0';
	string s = "hello world\0";

	cout <<str << endl << &str << endl;
	for (int i = 0; i < sizeof(str); i++)
	{
		cout << str[i]<<endl;
	}

		return 0;
}
sockaddr_in addrinfo;
sockaddr_in claddr;
int cretsock(string IP, int port) {
	addrinfo.sin_addr.S_un.S_addr = inet_addr(IP.c_str());
	addrinfo.sin_port = htons(port);
	addrinfo.sin_family = AF_INET;
	int s = socket(0, 0, 0);
	bind(s, (sockaddr*)&addrinfo, sizeof(sockaddr));
	listen(s, 1);



}