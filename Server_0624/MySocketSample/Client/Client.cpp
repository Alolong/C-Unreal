#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define NOMINMAX


#include <iostream>
#include <WinSock2.h>
#include "Packet.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include "flatbuffers/flatbuffers.h"
#include "Calculate_generated.h"


#pragma comment(lib,"ws2_32")

int main()
{


	//serialize(file)
	//const char* JSONString = "{ \"Key\" : \"Value1\",\"Key1\" : \"Value1\",.\"Number1\" : 10, \"Number2\" = 20   }";

	////객체, deserialize
	//Document d;


	////
	//d.Parse(JSONString);
	//d.AddMember("Number3", d["Number1"].GetInt() + d["Number2"].GetInt(), d.GetAllocator());
	//cout << d["Number3"].GetInt() << endl;
	//// 배열에 number3 추가 후 int 갖고옴 number 1의 int와 number2의 int를 더한다.



	////serialize - 객체를 문자열로 바꿔주는 단계
	//StringBuffer buffer; //버퍼에 문자열이 만들어짐
	//writer<StringBuffer> writer(buffer);
	//d.Accept(writer);

	//std::cout << buffer.GetString() << cout;



	WSAData wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);

	SOCKET ServerSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	SOCKADDR_IN ServerSocketAddr;
	memset(&ServerSocketAddr, 0, sizeof(ServerSocketAddr));
	ServerSocketAddr.sin_family = PF_INET;
	ServerSocketAddr.sin_addr.s_addr = inet_addr("127.0.01");
	ServerSocketAddr.sin_port = htons(32000);


	connect(ServerSocket, (SOCKADDR*)&ServerSocketAddr, sizeof(ServerSocketAddr));

	char Operators[5] = { '+', '-', '*', '/', '%' };
	srand((unsigned int)time(NULL));
	while (true)
	{
		int Number1 = rand() % 9998 + 1;
		int Number2 = rand() % 9998 + 1;
		uint8_t Operator = Operators[rand() % 5];
		//버퍼 생성
		flatbuffers::FlatBufferBuilder Builder(1024);
		auto Data = Calculate::CreateData(Builder, Number1, Number2, Operator);
		Builder.Finish(Data);


		cout << Builder.GetBufferPointer() << endl;// 전송할 전체 패킷 사이즈

		/* rapidjson
		Document d;
	
		d.SetObject();
		d.AddMember("Number1", Number1, d.GetAllocator());
		d.AddMember("Number2", Number2, d.GetAllocator());
		d.AddMember("Operator", Operators[rand() % 5], d.GetAllocator());

		StringBuffer buffer;
		Writer<StringBuffer> writer(buffer);
		d.Accept(writer);
		cout << buffer.GetString() << endl;
		*/
		int Number1 = rand() % 9998 + 1;
		int Number2 = rand() % 9998 + 1;
		uint8_t Operator = Operators[rand() % 5];

		flatbuffers::FlatBufferBuilder Builder(1024); //flatbufferbuilder 정의
		auto Data = Calculate::CreateData(Builder, Number1, Number2, Operator);
		Builder.Finish(Data);

		std::cout << Number1 << " " << Operator << " " << Number2;

		int PacketSize = (int)Builder.GetSize();
		PacketSize = htonl(PacketSize);
		//header, 길이
		int SentBytes = send(ServerSocket, (char*)&PacketSize, sizeof(PacketSize), 0);
		
		//자료
		SentBytes = send(ServerSocket, (char*)Builder.GetBufferPointer(), (int)Builder.GetSize(), 0);
		
		//받기
		char RecvBuffer[65535] = { 0, };
		int RecvBytes = recv(ServerSocket, (char*)&PacketSize, sizeof(PacketSize), MSG_WAITALL);
		PacketSize = ntohl(PacketSize);
		RecvBytes = recv(ServerSocket, RecvBuffer, PacketSize, MSG_WAITALL);

		auto d = Calculate::GetResult(RecvBuffer);




	/*	d.RemoveAllMembers();
		d.SetObject();
		d.Parse(RecvBuffer);
		cout << d["Result"].GetInt() << endl;*/
	}
