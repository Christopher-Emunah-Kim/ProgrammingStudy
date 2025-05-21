#include <iostream>  

using namespace std;  

int func()
{
	return 5;
}

int goo()
{
	return 10;
}

int main()  
{  
	cout << func << endl; //00007FF6B96844B0 함수에도 주소가 있음.

	//Function Pointer
	int (*fcnptr) () = func; //파라미터의 형태도 일치해야함.
	//초기화는 함수의 이름을 대입.

	//함수포인터를 통한 함수 호출
	cout << fcnptr() << endl; //출력값 : 5

	//다른 함수주소를 대입
	fcnptr = goo; 

	//함수포인터를 통한 함수 호출
	cout << fcnptr() << endl; //출력값 :10




   return 0;  
}