#include <iostream>

using namespace std;


void pointArray(int array[]) //내부적으로 int* array와 동일.
{
	cout << sizeof(array) << endl;
}

int main()
{
	int array[5] = {9, 6, 5, 3, 1};

	cout << array[0] << " " << array[1] << endl; //9 6
	cout << array << endl; //000000703EEFFA58
	cout << &(array[0]) << endl; //000000703EEFFA58
	
	cout << *array << endl; //배열의 주소 : 첫번쨰 인덱스값의 주소 : 9


	int* ptr = array; //pointer(int포인터라는 의미)
	cout << ptr << endl;  //000000703EEFFA58
	cout << *ptr << endl; //9가 나옴. de-reference(주소에 접근해 값을 꺼내온다는 의미)
	
	//포인터 변수의 크기는 64비트 기준 8바이트. 32비트 기준 4바이트.
	//함수 인자로 전달될떄 암묵적인 형변환(decay)가 일어남.
	pointArray(array);

	return 0;
}