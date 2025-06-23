#define _CRT_SECURE_NO_WARNINGS  b 
#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <iostream>
#include <WinSock2.h>
#include <string>
//윈도우에서 사용 

//윈도우에서 라이브러리 사용
#pragma comment(lib,"ws2_32")

int main()
{

	char Message[6]{ 0, };
	
	int FirstNumber = 99;
	int SecondNumber = 99;
	//[9][9][+][9][9][0]
	sprintf(Message, "%d+%d", FirstNumber, SecondNumber);

	printf("s", Message);


	WSAData wsaData;
	WSAStartup(MAKEWORD(2,2), &wsaData);



	//연결될 소켓 생성
	SOCKET ListenSocket = socket(AF_INET, SOCK_STREAM, 0);

	//소켓 바인드
	SOCKADDR_IN ListenSockAddr;
	memset(&ListenSockAddr, 0, sizeof(ListenSockAddr));
	ListenSockAddr.sin_family = PF_INET;
	ListenSockAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	ListenSockAddr.sin_port = htons(32200);

	//바인드
	bind(ListenSocket,(SOCKADDR*)&ListenSockAddr, sizeof(ListenSockAddr));

	//들어오는 소켓 듣기
	listen(ListenSocket, 0);



	//클라 소켓 정의
	SOCKADDR_IN ClientSockAddr;
	memset(&ClientSockAddr, 0, sizeof(ClientSockAddr));
	int ClientSockAddrLength = sizeof(ClientSockAddr);
	SOCKET ClientSocket = accept(ListenSocket, (SOCKADDR*)&ClientSockAddr, &ClientSockAddrLength);


	FILE*InputFile=fopen("good.png", "rb");
	FILE* OutputFile = fopen("good_copy.png", "wb");



	char Buffer[1024] = {0,};
	
	//파일 사이즈
	size_t ReadFileSize = 0;
	size_t WriteFileSize = 0;

	do
	{
		
		//서버에서 초기화
		ReadFileSize = fread(Buffer, sizeof(char), sizeof(Buffer), InputFile);
		//클라에 전송
		// 
		send(ClientSocket, Buffer, ReadFileSize, 0);		// 
		// 
		// 
// 
		//send OS TCP - OS가 알아서 해줌
		//WriteFileSize = fwrite(Buffer, sizeof(char), sizeof(Buffer), InputFile);

		printf("size %d\n", (int)ReadFileSize);

	} while (feof(InputFile) != 0);// 파일 다읽었는지 확인
	





	fclose(InputFile);//파일 끄기
	closesocket(ListenSocket);
	closesocket(ClientSocket);//파일 끄기


	WSACleanup();




	return 0 ;
}

