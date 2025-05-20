//#include <iostream>
//
//using namespace std;
//
//
//
//int main()
//{
//	/*
//	   (방법 1)
//		int *ptr = new int;
//		*ptr = 7;
//		 
//		delete ptr;
//		
//		(방법 2)
//		int *ptr = new int{7};
//
//		delete ptr;
//
//		ptr = nullptr;
//		if(ptr != nullptr)
//		{
//			cout << ptr << endl;
//			cout << *ptr << endl;
//		}
//		
//	*/
//	//메모리 해제를 해도 해당 주소 자체는 변수에 저장되어
//	//있기 때문에 de-reference를 하면 garbage값이 출력.
//	//따라서, delete하고나서 해당 변수에 nullptr 을 넣어두고 조건체크를 하는 경우가 많았음
//	//but, 지금은 스마트포인터의 존재로 인해 불필요해진 스킬.
//	
//	/*
//		(예외처리 방법)
//		int *ptr = new (std::nothrow)int {7}; //예외처리 방법 중 하나
//		int *ptr2 = ptr;
//
//		delete ptr;
//		ptr = nullptr;
//		//이 경우 ptr2도 메모리해제가 되지않아 Dangling Pointer 문제가 발생.
//		//이러한 문제들을 해결하기 위해 스마트포인터가 도입됨.
//
//	*/
//
//	// Memory Leak(메모리 누수) 문제
//	while (true)
//	{
//		int * ptr = new int; //동적할당 받아놓고 반복문돌면서 해제가 안되는 문제.
//		cout << ptr << endl;
//
//		delete ptr; //반드시 메모리 해제를!!!
//	}
//
//
//
//
//
//
//
//	return 0;
//}