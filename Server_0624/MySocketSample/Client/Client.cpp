#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <iostream>
#include <WinSock2.h>
#include "Packet.h"

using namespace std;

#pragma comment(lib,"ws2_32")

int main()
{
	WSAData wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);

	SOCKET ServerSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	SOCKADDR_IN ServerSocketAddr;
	memset(&ServerSocketAddr, 0, sizeof(ServerSocketAddr));
	ServerSocketAddr.sin_family = PF_INET;
	ServerSocketAddr.sin_addr.s_addr = inet_addr("127.0.01");
	ServerSocketAddr.sin_port = htons(32000);


	connect(ServerSocket, (SOCKADDR*)&ServerSocketAddr, sizeof(ServerSocketAddr));



	char Buffer[1024] = { 0, };
	recv(ServerSocket, Buffer, 1024, 0);
	cout << "Server Send:" << Buffer << endl;

	send(ServerSocket, Buffer, strlen(Buffer), 0);



	closesocket(ServerSocket);


	WSACleanup();

	return  0;

}