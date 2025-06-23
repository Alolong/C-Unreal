#include <iostream>
#include <WinSock2.h>
#pragma comment(lib,"ws2_32")


using namespace std;

int main()
{
	////////초기화
	WSAData wsaData;
	//winsock 버전 2.2 사용
	int Result = WSAStartup(MAKEWORD(2, 2), &wsaData);

	////////소켓 생성
	SOCKET ListenSocket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
	
	////////소켓 주소 생성
	//어떤 랜카드와 연결할지의 정보
	struct sockaddr_in ListenSockAddr;
	memset(&ListenSockAddr, 0, sizeof(ListenSockAddr));
	ListenSockAddr.sin_family = PF_INET; // 주소 체계
	ListenSockAddr.sin_addr.s_addr = INADDR_ANY;//접속 받아들이;ㅁ 설정
	ListenSockAddr.sin_port = htons(32000);//소켓이 사용할 포트 번호 설정


	////////소켓과 주소연결
	int Result = bind(ListenSocket,(struct sockaddr*)&ListenSockAddr, sizeof(ListenSockAddr));
	
	
	
	////////리슨- 클라이언트가 들어오는지 확인 
	int Result = listen(ListenSocket, 5);
	



	//클라이언트 소켓
	struct sockaddr_in ClientSockAddr;
	memset(&ClientSockAddr, 0, sizeof(ClientSockAddr));
	int ClientSockAddrLength = sizeof(ClientSockAddr);

	////////Accept
	SOCKET ClientSocket = accept(ListenSocket, (struct sockaddr*)&ClientSockAddr, &ClientSockAddrLength);



	////////데이터 송신
	const char Message[1024] = "Hello World";
	send(ClientSocket, Message, strlen(Message), 0);
	
	FILE* image;
	image = fopen("good.png","r");

	
	
	////////데이터 수신 
	char Buffer[1024] = { 0, };
	recv(ClientSocket, Buffer, 1024, 0);

	cout << "Client Send : " << Buffer << endl;



	////////소켓 닫기
	closesocket(ClientSocket);
	closesocket(ListenSocket);

	//////// Winsock 해제
	WSACleanup();

	return 0;

}




