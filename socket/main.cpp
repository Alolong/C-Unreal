
#include <iostream>
#include <WinSock2.h>

//
#pragma comment(lib,"ws2_32")//winsock 라이브러리 



using namespace std;

int main ()
{
	//dll init winsock의 초기화 - WSAData
	//주로 요청 버전
	WSAData wsaData;

	// 초기 예외 처리 
	//MAKEWORD- 2바이트2바이트 쪼개 봄.//윈도우 전용헤더 minwindef.h인데 winSock2포함하면 간접적으로 포함됨
	int Result = WSAStartup(MAKEWORD(2, 2), &wsaData);//초기화
	
	if (Result != 0)
	{
		cout << "Winsock init Error" << endl;
		exit(-1);// 출력 에러
	}
	//////////소켓생성///////////////////
	//SOCK_STREAM  어떤 데이터 사용할 건지- TCP사용 - 벽에다 전구 소켓을 만든 단계
	//ipv4중에 stream 사용하는 것 -tcp만 사용
	SOCKET ListenSocket = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);

	if (ListenSocket == INVALID_SOCKET)
	{
		cout << "socket Error" << endl;
		exit(-1);
	}

	//
	//어떤 랜카드와 연결할지의 정보
	//자료 크기 설명 좀.. 공부 필요
	struct sockaddr_in ListenSockAddr;
	memset(&ListenSockAddr, 0, sizeof(ListenSockAddr));
	ListenSockAddr.sin_family = PF_INET;
	ListenSockAddr.sin_addr . s_addr = INADDR_ANY;//수업때만 쓰는 내 주소(연습용)//addr - 4bite - 1개씩 4개쓸래/2개씩 2개쓸래/ 하나 4개쓸래
	ListenSockAddr.sin_port = htons(32000);//몇번 포트 쓸거냐- 주로 wellKnownPort..이지만 안쓰는 것도 많긴함-해킹당하기 쉬움//내가 만든 소켓이랑 연결할 주소 
	
	
	//소켓의 연결 - 바인딩
	int Result = bind(ListenSocket,(struct sockaddr*)&ListenSockAddr, sizeof(ListenSockAddr));
	//내 소켓과 소켓을 연결할거임


	if (Result == SOCKET_ERROR)
	{
		cout << "bind Error" <<GetLastError()<<endl;
		exit(-1);
		//GetLastError() 에러 번호를 찍어줌
	}

	//리슨 - 들어오는 걸 확인
	int Result = listen(ListenSocket, 5);

		if (Result == SOCKET_ERROR)
	{
		cout << "Listen Error" << GetLastError() << endl;
		exit(-1);
		
	}

	//
		while (true)
		{



			struct sockaddr_in ClientSockAddr;
			memset(&ClientSockAddr, 0, sizeof(ClientSockAddr));
			int ClientSockAddrLength = sizeof(ClientSockAddr);
			SOCKET ClientSocket = accept(ListenSocket, (struct sockaddr*)&ClientSockAddr, &ClientSockAddrLength);
			//accept는 블록킹 함수- > 허용되기 전까지 멈춰있음
		if (ClientSocket == INVALID_SOCKET)
		{
			cout << "accept Error " << GetLastError() << endl;
			exit(-1);
		}


		const char Message[1024] = "Hello World";
		send(ClientSocket, Message, strlen(Message), 0);

		char Buffer[1024] = { 0, };
		recv(ClientSocket, Buffer, 1024, 0);

		cout << "Client Send : " << Buffer << endl;

		closesocket(ClientSocket);
		closesocket(ListenSocket);

		}






	//dll remove
	WSACleanup();

		return 0;
}