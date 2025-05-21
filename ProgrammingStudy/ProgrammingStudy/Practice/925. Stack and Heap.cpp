//#include <iostream>  
//
//using namespace std;  
//
//
//
//
//
////스택 메모리 예제
//int g_i1 = 0;
//
//int second(int x)
//{
//	return 2 * x;
//}
//
//int first(int x)
//{
//	int y = 3;
//	return second(x + y);
//}
//
////스택 메모리 예제
////int main()  
////{  
////	int a = 1, b;
////	b = first(a);
////	cout << b << endl;
////
////   return 0;  
////}
//
//
///*
//	//메모리 영역 내 구조
//
//	// 스택 프레임3 : second() , int x
//	// 스택 프레임2 : first(), int x, int y
//	// 스택 프레임1 : main(), int a, int b
//	// 데이터 영역  : int g_i1
//
//*/
//
//
////힙 메모리 예제
//int g_i2 = 0;
//
////int main()
////{
////	int* ptr = nullptr;
////	ptr = new int[100000];
////
////	delete[] ptr;
////	ptr = nullptr;
////
////	return 0;
////}
//
//
///*
//	//메모리 영역 내 구조
//
//	// 힙     영역  : sizeof(int) * 100000 Bytes 할당
//	// 스택 프레임1 : main(), int * ptr
//	// 데이터 영역  : int g_i2
//
//*/
//
//
////힙 메모리 예제 2
//int g_i3 = 0;
//
//void initArray()
//{
//	int* ptr2 = new int[1000];
//	//delete[] ptr2;
//}
//
//int main()
//{
//	initArray();
//
//	return 0;
//}
//
//
//
///*
//	//메모리 영역 내 구조
//
//	//코드상 힙영역 delete가 이루어지지않아 메모리 누수 발생
//	// 힙     영역  : sizeof(int) * 1000 Bytes 할당
//	// 스택 프레임2 : intiArray() , int * ptr2
//	// 스택 프레임1 : main()
//	// 데이터 영역  : int g_i3
//
//*/