#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <iostream>
#include <winsock2.h>

#pragma comment(lib, "ws2_32")

int main()
{
	WSAData wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);

	//연결할 소켓 정의
	SOCKET ServerSocket = socket(AF_INET, SOCK_STREAM, 0);


	//SOCKADDR_IN는 IPv4 주소 정보를 담는 구조체
	SOCKADDR_IN ServerSockAddr;
	memset(&ServerSockAddr, 0, sizeof(ServerSockAddr));//memset - 메모리 초기화 함수, 특정값으로 초기화
	ServerSockAddr.sin_family = PF_INET;
	ServerSockAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	ServerSockAddr.sin_port = htons(30303);
	// 초기화 한 곳에 값 넣어줌

	//소켓 연결
	connect(ServerSocket, (SOCKADDR*)&ServerSockAddr, sizeof(ServerSockAddr));

	FILE* OutputFile = fopen("good_copy.png", "wb");

	char Buffer[1024] = { 0, };
	size_t RecvSize = 0;
	size_t WritFileSize = 0;
	do
	{
		//send
		RecvSize = recv(ServerSocket, Buffer, sizeof(Buffer), 0);
		WritFileSize = fwrite(Buffer, sizeof(char), RecvSize, OutputFile);
	} while (RecvSize > 0);

	fclose(OutputFile);
	closesocket(ServerSocket);

	WSACleanup();

	return 0;
}