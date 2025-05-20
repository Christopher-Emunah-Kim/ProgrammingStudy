//#include <iostream>
//#include <stddef.h> //null_ptr_t 타입을 쓰게 해주는 헤더
//
//using namespace std;
//
//void doSomething(double* ptr)
//{
//	if (ptr != nullptr)
//	{
//		//do something useful
//		std::cout << *ptr << std::endl;
//
//		cout << "address of pointer variable in doSomething() " << &ptr << endl; //00000028173DF970
//	}
//	else
//	{
//		//do not anything.
//		std::cout << "Null ptr" << endl;
//	}
//}
//
//
//int main()
//{
//	double *ptr = nullptr; //modern c++
//	//double *ptr{nullptr}; //Uniform Initialization
//
//	doSomething(ptr); //Null ptr
//	doSomething(nullptr); //Null ptr
//
//	double d = 123.4;
//
//	doSomething(&d); //123.4
//
//	ptr = &d;
//
//	doSomething(ptr); //123.4
//
//	cout << "address of pointer variable in main() " << &ptr << endl; //0000000922AFF928
//	//포인터도 결국 메모리의 주소값이기 때문에 인자로 제공되는 포인터도 다른 주소를 사용한다.
//
//
//	//nullptr 리터럴 타입.
//	std::nullptr_t nptr; 
//	
//
//	return 0;
//}