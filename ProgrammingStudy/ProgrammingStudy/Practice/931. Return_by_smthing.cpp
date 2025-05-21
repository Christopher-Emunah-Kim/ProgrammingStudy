//#include <iostream>  
//#include <array>
//
//using namespace std;  
//
////Return by value
//int getValue(int x)
//{
//	int value = x*2;
//	return value;
//}
//
//
////Return by pointer
//int* getPointer(int x)
//{
//	int value = x * 2;
//	return &value;
//}
//
////Return by Reference
//int& getReference(int x)
//{
//	int value = x*2;
//	return value;
//}
//
////참조반환이 유용한 예
//int& getArray(array<int, 100>& my_array, int idx)
//{
//	return my_array[idx];
//}
//
//
//
////Factory pattern
//int* allocateMemory(int size)
//{
//	return new int[size];
//}
//
//
//
//int main()  
//{  
//	//Return by value
//	int value = getValue(3);
//
//	//Return by Adress
//	//int value_p = *getPointer(3); 지역을 떠나 사라진 내용을 de-reference하는 것은 좋은 방법이 아님.
//	//int* value_p = getPointer(3); 주소자체를 받는것은 dangling pointer 발생 위험이 있음.
//	//int& value_r = getReference(3); ref의 ref로 받는것은 원본이 지역변수이기에 마찬가지로 문제가 될 소지가 있음.
//	int value_r = getReference(3); //가능하지만 가급적 참조전달을 쓰는편이 나음.
//
//	//참조반환이 유용한 예
//	array<int, 100> my_array; //원본의 메모리가 확실히 잡혀있음.
//	my_array[30] = 10;
//	getArray(my_array, 30) = 1024; //원본에 접근해서 조작하도록 함.
//	cout << my_array[30] << endl;
//
//
//
//	//Factory pattern
//	int* array = allocateMemory(1024);
//
//	delete[] array;
//
//   return 0;  
//}