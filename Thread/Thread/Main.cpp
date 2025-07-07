#include <iostream>
#include <Windows.h>
#include <process.h>

using namespace std;

volatile LONG BasicSpinlock = 0;
volatile LONG BasicSpinlock2 = 0;

/*





*/
// 여기선 OS 접근 불가하도록 강제
CRITICAL_SECTION CS;



int Bank = 0;

//race condition :프로그램이나 시스템 등의 
// 실행/출력 결과가 일정하지 않고, 입력의 타이밍, 
// 실행되는 순서나 시간 등에 영향을 받게 되는 상황
HANDLE ThreadHandle[4];

void InitializeSpinlock(volatile LONG* lock)
{

	*lock = 0;// 0 : 풀림 ,1잠김

}

void EnterSpinlock(volatile LONG* lock)
{
	///CAS(Compare And Swap) - 하드에서 지원하는 함수
	//InterlockedCompareExchange(lock,1,0) -  중간에 비교하여 값 바꾸기
	//다중스레드 
	while (InterlockedCompareExchange(lock, 1, 0) != 0)//한스레드가 끝날떄까지 다른스레드 못넘김
	{
		Sleep(2);//0이면 제어권을 다른 스레드에게 넘겨줌. 0아니면 잠시 다른애한테 주고 다시 가져옴 
	}

}



void LeaveSpinlock(volatile LONG* lock)
{
	//락 걸림
	InterlockedExchange(lock, 0);
}


void DeleteSpinlock(volatile LONG* lock)
{
	*lock = 0;// 0 : 풀림 ,1잠김

}

unsigned Increase(void* Arg)
{
	for (int i = 0; i < 100000; ++i)
	{
		//임계구역  atomic 보장  
		// lock 객체 - > spinlock :무한히 기다림 / 
		// adaptive spinlock  (다른일 하는것 그러나 일정치 않음)         
		//backoff spinlock (계속 접근하지 않고, 시간을 늘리면서 sleep 했다가 시도)
		EnterSpinlock(&BasicSpinlock);
		EnterSpinlock(&BasicSpinlock2);

		Bank++;
		LeaveSpinlock(&BasicSpinlock2);
		LeaveSpinlock(&BasicSpinlock);

	}

	return 0;
}


unsigned Decrease(void* Arg)
{
	for (int i = 0; i < 100000; ++i)
	{
		EnterSpinlock(&BasicSpinlock2);
		EnterSpinlock(&BasicSpinlock);

		Bank--;
		LeaveSpinlock(&BasicSpinlock);
		LeaveSpinlock(&BasicSpinlock2);

	}

	return 0;
}



int main()
{
	InitializeSpinlock(&BasicSpinlock);



	////최적화 못하게 함 volatile 
	//volatile bool Result = true;
	//while (Result)
	//{

	//}

//
//	InitializeCriticalSection(&CS);
//
//
//	for (int i = 0; i < 4; ++i)
//	{
//
//		//Increase(NULL);
//		//OS가 알아서 실행함
//	ResumeThread(ThreadHandles[0]);//한번만 실행
	ThreadHandles[0] =
		(HANDLE)_beginthreadex(0, 0,
			Increase,
			0, CREATE_SUSPENDED, 0);

	ThreadHandles[1] =
		(HANDLE)_beginthreadex(0, 0,
			Decrease,
			0, CREATE_SUSPENDED, 0);
	//	}

		//Sleep(1000); // 1초 기다림-  (계산이 끝날 떄까지)

	WaitForMultipleObjects(2, ThreadHandles, TRUE, INFINITE);//핸들이 끝나면 무한히 기다림
	std::cout << Bank << std::endl;
	//
	//	DeleteCriticalSection(&CS);
	//
			//데드락 : 둘이상의 프로세스나 스레드가 서로의 자원점유하고, 다른 프로세스가 점유한 자원을 기다리는 교착상태
			//해결법 외워야됨
			//OSI도 외워야됨



	DeleteSpinlock(&BasicSpinlock);
	DeleteSpinlock(&BasicSpinlock2);
	return 0;

}