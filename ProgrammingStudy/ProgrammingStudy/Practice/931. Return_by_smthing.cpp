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
////������ȯ�� ������ ��
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
//	//int value_p = *getPointer(3); ������ ���� ����� ������ de-reference�ϴ� ���� ���� ����� �ƴ�.
//	//int* value_p = getPointer(3); �ּ���ü�� �޴°��� dangling pointer �߻� ������ ����.
//	//int& value_r = getReference(3); ref�� ref�� �޴°��� ������ ���������̱⿡ ���������� ������ �� ������ ����.
//	int value_r = getReference(3); //���������� ������ ���������� �������� ����.
//
//	//������ȯ�� ������ ��
//	array<int, 100> my_array; //������ �޸𸮰� Ȯ���� ��������.
//	my_array[30] = 10;
//	getArray(my_array, 30) = 1024; //������ �����ؼ� �����ϵ��� ��.
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