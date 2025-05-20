#include <iostream>

using namespace std;



int main()
{
	//char *name = "Jack Jack"; //오류. 실제 문자열을 담아둘 곳이 없어서.
	const char * name = "Jack Jack"; //가능. const char*를 통해 문자열을 심볼릭 상수로 만듦.
	const char * name2 = "Jack Jack";

	cout << (uintptr_t)name << endl; //140698234121152
	cout << (uintptr_t)name2 << endl; //140698234121152
	//2개의 주소가 동일하게 출력됨. 컴파일러가 해당 문자열을 상수취급하고 있기 때문.

	const char * name3 = "Jack Jack 2222";
	cout << (uintptr_t)name3 << endl; //140697313340464.
	//문자열 내용이 달라져 개별 상수로 취급



	return 0;
}