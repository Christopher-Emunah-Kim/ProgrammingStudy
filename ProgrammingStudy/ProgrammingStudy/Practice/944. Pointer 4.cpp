//#include <iostream>
//
//using namespace std;
//
//
//
//int main()
//{
//	//포인터의 주소연산(Array Indexing)
//	int value = 7;
//	int *vptr = &value;
//
//	cout << uintptr_t(vptr -1) << endl; //958098504816
//	cout << uintptr_t(vptr) << endl; //958098504820
//	cout << uintptr_t(vptr +1) << endl; //958098504824
//	cout << uintptr_t(vptr +2) << endl; //958098504828
//	//integer타입이니까 메모리 공간 내에서 4씩 이동.
//	//포인터 타입에 data type을 적는 이유 
//	// : 데이터 타입을 통해 메모리 주소에서 읽어들일 양을 정하기 위해.
//
//	//int 타입 배열의 내부 주소 보기
//	int array[] = {9, 6, 7, 2,3, 2};
//
//	int *ptr = array;
//
//	for (int i = 0; i < 5; ++i)
//	{
//		cout << *(ptr+i) << (uintptr_t)(ptr+i) << endl;
//	}
//
//	//문자열의 주소연산
//	char name[] = "Jack Jack";
//
//	const int n_name = sizeof(name) / sizeof(char);
//
//	char *ptr = name;
//
//	for (int i = 0; i < n_name; ++i)
//	{
//		cout << *(ptr + i);
//	}
//
//	return 0;
//}