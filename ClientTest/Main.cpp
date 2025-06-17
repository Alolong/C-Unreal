#define _WINSOCK_DEPRECATED_NO_WARNINGS 

#include <iostream>
#include <WinSock2.h>


#pragma comment(lib,"ws2_32")



using namespace std;


int main()
{
	//dll init
	WSADATA wsaData;

	int Result = WSAStartup(MAKEWORD(2, 2), &wsaData);
	
	
	if (Result != 0)
	{
		cout << "Winsock init Error" << endl;
		exit(-1);
	}
	
	//
	SOCKET ListenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	
	                                                                           
	if (ListenSocket == INVALID_SOCKET)
	{
		cout << "socket  Error" << endl;
		exit(-1);
	}
	//

	struct sockaddr_in ListenSockAddr;
	memset(&ListenSockAddr, 0, sizeof(ListenSockAddr));
	ListenSockAddr.sin_family = PF_INET;
	ListenSockAddr.sin_addr.s_addr = inet_addr("192.168.0.5"); // 연결할 주소
	ListenSockAddr.sin_port = htons(32000);//몇번 포트 쓸거냐- 주로 wellKnownPort..이지만 안쓰는 것도 많긴함-해킹당하기 쉬움//내가 만든 소켓이랑 연결할 주소 

	Result = connect(ListenSocket, (struct sockaddr*)&ListenSockAddr, sizeof(ListenSockAddr));

	if (Result == SOCKET_ERROR)
	{
		cout << "connect Error " << GetLastError() << endl;
		exit(-1);
	}



	char Buffer[1024] = { 0, };
	recv(ListenSocket, Buffer, 1024, 0);
	cout << "Server Send : " << Buffer << endl;

	send(ListenSocket, Buffer, strlen(Buffer), 0);

	closesocket(ListenSocket);

	//dll remove
	WSACleanup();

	return 0;
}

/*#define _WINSOCK_DEPRECATED_NO_WARNINGS 

#include <iostream>
#include <WinSock2.h>

#pragma comment(lib, "ws2_32")

using namespace std;

int main()
{
//dll init
WSAData wsaData;
int Result = WSAStartup(MAKEWORD(2, 2), &wsaData);
if (Result != 0)
{
cout << "Winsock init Error" << endl;
exit(-1);
}

//IPv4, Stream, TCP
SOCKET ListenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

if (ListenSocket == INVALID_SOCKET)
{
cout << "socket Error" << endl;
exit(-1);
}

struct sockaddr_in ListenSockAddr;
memset(&ListenSockAddr, 0, sizeof(ListenSockAddr));
ListenSockAddr.sin_family = PF_INET;
ListenSockAddr.sin_addr.s_addr = inet_addr("127.0.0.1"); 
ListenSockAddr.sin_port = htons(32000);

Result = connect(ListenSocket, (struct sockaddr*)&ListenSockAddr, sizeof(ListenSockAddr));

if (Result == SOCKET_ERROR)
{
cout << "connect Error " << GetLastError() << endl;
exit(-1);
}

char Buffer[1024] = { 0, };
recv(ListenSocket, Buffer, 1024, 0);
cout << "Server Send : " << Buffer << endl;

send(ListenSocket, Buffer, strlen(Buffer), 0);

closesocket(ListenSocket);

//dll remove
WSACleanup();

return 0;
}*/