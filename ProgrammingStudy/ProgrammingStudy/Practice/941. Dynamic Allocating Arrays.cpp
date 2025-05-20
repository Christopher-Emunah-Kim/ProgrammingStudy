//#include <iostream>
//
//using namespace std;
//
//
//
//int main()
//{
//	int length;
//
//	cin >> length;
//
//	//int * array = new int [length]; //기본
//	int * array = new int [length] {11, 22, 33, 44, 55}; //Uniform Initialization. 이후 자리는 모두 0으로 채워짐
//
//	array[0] = 1;
//	array[1] = 2;
//
//	for(int i = 0; i < length; ++i)
//	{
//		cout << (uintptr_t)&array[i] << endl;
//		cout << array[i] << endl;
//	}
//
//	delete[] array;
//
//
//
//	int fixedArrays[] = {1,2,3,4,5};
//
//	int * array = new int[5] {1,2,3,4,5}; //만들고자하는 동적배열의 크기를 모르면 컴파일 오류 발생.
//
//
//
//	return 0;
//}