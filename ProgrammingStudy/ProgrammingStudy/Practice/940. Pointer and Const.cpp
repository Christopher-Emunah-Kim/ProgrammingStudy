//#include <iostream>
//
//using namespace std;
//
//
//
//int main()
//{
//	int value = 5;
//	int * ptr = &value;
//	*ptr = 6;
//	cout << *ptr << endl;
//
//	//// const + 포인터 + identifier /////
//	//value 값을 간접참조로 못바꾸나 값을 읽거나 주소는 가져올 수 있음.
//	const int value2 = 5;
//	const int * ptr2 = &value2;
//	//*ptr2 = 6; (오류!)
//	cout << *ptr2 << endl;
//
//	//포인터가 직접 값을 못바꿀뿐, 직접참조로 값변경 가능
//	int value3 = 5;
//	const int* ptr3 = &value3;
//	//*ptr3 = 6; (오류!)
//	value3 = 6;
//	cout << *ptr3 << endl;
//
//	//포인터를 통해 값변경하는걸 막을뿐,
//	//포인터가 가리키는 곳을 바꾸거나, 주소와 값을 읽는것은 다 가능.
//	int value4 = 5;
//	const int* ptr4 = &value4;
//	int value5 = 6;
//	ptr4 = &value5; //새로운 주소로 변경
//	//*ptr4 = 7; (오류)! 여전히 포인터를 통한 변경은 NO.
//
//
//	//// 포인터 + const + Identifier ////
//	//포인터가 가리킨 곳을 상수화. 값을 바꿀 수 없음.
//	int value6 = 5;
//	int *const ptr6 = &value6;
//	*ptr6 = 10; //값 대입 가능.
//	int value7 = 6;
//	//ptr6 = &value7; (오류!) 값 대입이안됨.
//	cout << *ptr6 << endl; //역참조 가능
//
//
//	//// const + 포인터 + const + Identifier
//	//아무것도 안됨.
//	int value8 = 5;
//	const int* const ptr8 = &value8; //초기화 필수
//
//
//	//////////////////////////////////////////////////////////////////////////
//	// 정리
//	int value00 = 5;
//	const int *ptr11			= &value00;
//	int* const ptr12			= &value00;
//	const int* const ptr13		= &value00;
//
//
//
//
//	return 0;
//}