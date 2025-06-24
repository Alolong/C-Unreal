#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <iostream>
#include <WinSock2.h>
#include "Packet.h"
#pragma comment(lib,"ws2_32")


///


/// 

int main()
{
	WSAData wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);

	SOCKET ListenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	SOCKADDR_IN ListenSockAddr;
	memset(&ListenSockAddr, 0, sizeof(ListenSockAddr));
	ListenSockAddr.sin_family = PF_INET;
	ListenSockAddr.sin_addr.s_addr = inet_addr("127.0.01");
	ListenSockAddr.sin_port = htons(32000);

	bind(ListenSocket, (SOCKADDR*)&ListenSockAddr, sizeof(ListenSockAddr));

	listen(ListenSocket, 2);//0은 백로그 - 동시접속 대기 큐의 크기 0 은 1개이상 처리안한다는 뜻 더 연결하고 싶으면 숫자 넣기



	SOCKADDR ClientSockAddr;
	memset(&ClientSockAddr, 0, sizeof(ClientSockAddr));
	int ClientSockAddrLength = sizeof(ClientSockAddr);//구조체의 바이트 크기를 미리 계산하여 알려줌
	SOCKET ClientSocket = accept(ListenSocket, (SOCKADDR*)&ClientSockAddr, &ClientSockAddrLength);

	const char Buffer[1024] = { "Client Online" };


	while (true)
	{
		//int AssignTotalByte = 2;
		//char Answer[1024] = {};
		////int RecvByte 
		////2byte-> 무조건 2바이트 받았다는 보증이 필요함- >totalbyte계산 해야됨
		//int RecvTotalByte = 0;
		//do
		//{
		//	int RecvByte = recv(ClientSocket, &Answer[RecvTotalByte], 2 - RecvTotalByte, 0);//받기:OS님 버퍼에 넣어주세요
		//	RecvTotalByte += RecvByte;
		//} while (RecvTotalByte == AssignTotalByte);
		//send(ClientSocket, Buffer, sizeof(Buffer), 0);//보내기 :OS님 버퍼에서 꺼내주세요
		////TCP에 필수로 쓰임

		unsigned short PacketSize;
		int RecvByte = recv(ClientSocket, (char*)&PacketSize, 2, MSG_WAITALL);
		PacketSize = ntohs(PacketSize);

		unsigned short EventName;
		RecvByte = recv(ClientSocket, (char*)&EventName, 2, MSG_WAITALL);
		EventName = ntohs(EventName);

		EEventCode PakcetCode = (EEventCode)EventName;

		switch (PakcetCode)
		{
		case EEventCode::C2S_Plus:
		{
			Numbers Data;
			RecvByte = recv(ClientSocket, (char*)&Data, PacketSize, MSG_WAITALL);

			Data.FirstNumber = ntohs(Data.FirstNumber);
			Data.SecondNumbers = ntohs(Data.SecondNumbers);

			int Result = Data.FirstNumber + Data.SecondNumbers;

			PacketSize = sizeof(Result);
			PacketSize = htons(PacketSize);
			send(ClientSocket, (char*)&PacketSize, sizeof(unsigned short), 0);

			unsigned short EventName = (unsigned short)EEventCode::S2C_Result;
			EventName = htons(EventName);
			send(ClientSocket, (char*)&EventName, sizeof(unsigned short), 0);

			ResultNumber R;
			R.Number = Result;
			R.Number = htons(R.Number);
			send(ClientSocket, (char*)&R, sizeof(R), 0);
			break;
		}
		case EEventCode::C2S_Minus:
		{
			Numbers Data;
			RecvByte = recv(ClientSocket, (char*)&Data, PacketSize, MSG_WAITALL);

			Data.FirstNumber = ntohs(Data.FirstNumber);
			Data.SecondNumbers = ntohs(Data.SecondNumbers);

			int Result = Data.FirstNumber - Data.SecondNumbers;

			PacketSize = sizeof(Result);
			PacketSize = htons(PacketSize);
			send(ClientSocket, (char*)&PacketSize, sizeof(unsigned short), 0);

			unsigned short EventName = (unsigned short)EEventCode::S2C_Result;
			EventName = htons(EventName);
			send(ClientSocket, (char*)&EventName, sizeof(unsigned short), 0);

			ResultNumber R;
			R.Number = Result;
			R.Number = htons(R.Number);
			send(ClientSocket, (char*)&R, sizeof(R), 0);
			break;
		}
		case EEventCode::C2S_Multiply:
		{
			Numbers Data;
			RecvByte = recv(ClientSocket, (char*)&Data, PacketSize, MSG_WAITALL);

			Data.FirstNumber = ntohs(Data.FirstNumber);
			Data.SecondNumbers = ntohs(Data.SecondNumbers);

			int Result = Data.FirstNumber * Data.SecondNumbers;

			PacketSize = sizeof(Result);
			PacketSize = htons(PacketSize);
			send(ClientSocket, (char*)&PacketSize, sizeof(unsigned short), 0);

			unsigned short EventName = (unsigned short)EEventCode::S2C_Result;
			EventName = htons(EventName);
			send(ClientSocket, (char*)&EventName, sizeof(unsigned short), 0);

			ResultNumber R;
			R.Number = Result;
			R.Number = htons(R.Number);
			send(ClientSocket, (char*)&R, sizeof(R), 0);
			break;
		}
		case EEventCode::C2S_Divide:
		{
			Numbers Data;
			RecvByte = recv(ClientSocket, (char*)&Data, PacketSize, MSG_WAITALL);

			Data.FirstNumber = ntohs(Data.FirstNumber);
			Data.SecondNumbers = ntohs(Data.SecondNumbers);

			int Result = Data.FirstNumber / Data.SecondNumbers;

			PacketSize = sizeof(Result);
			PacketSize = htons(PacketSize);
			send(ClientSocket, (char*)&PacketSize, sizeof(unsigned short), 0);

			unsigned short EventName = (unsigned short)EEventCode::S2C_Result;
			EventName = htons(EventName);
			send(ClientSocket, (char*)&EventName, sizeof(unsigned short), 0);

			ResultNumber R;
			R.Number = Result;
			R.Number = htons(R.Number);
			send(ClientSocket, (char*)&R, sizeof(R), 0);
			break;
		}
		case EEventCode::C2S_Remain:
		{
			Numbers Data;
			RecvByte = recv(ClientSocket, (char*)&Data, PacketSize, MSG_WAITALL);

			Data.FirstNumber = ntohs(Data.FirstNumber);
			Data.SecondNumbers = ntohs(Data.SecondNumbers);

			int Result = Data.FirstNumber % Data.SecondNumbers;

			PacketSize = sizeof(Result);
			PacketSize = htons(PacketSize);
			send(ClientSocket, (char*)&PacketSize, sizeof(unsigned short), 0);

			unsigned short EventName = (unsigned short)EEventCode::S2C_Result;
			EventName = htons(EventName);
			send(ClientSocket, (char*)&EventName, sizeof(unsigned short), 0);

			ResultNumber R;
			R.Number = Result;
			R.Number = htons(R.Number);
			send(ClientSocket, (char*)&R, sizeof(R), 0);
			break;
		}
		}
	}



	closesocket(ListenSocket);
	WSACleanup();






	return  0;

}