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
//	//int * array = new int [length]; //�⺻
//	int * array = new int [length] {11, 22, 33, 44, 55}; //Uniform Initialization. ���� �ڸ��� ��� 0���� ä����
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
//	int * array = new int[5] {1,2,3,4,5}; //��������ϴ� �����迭�� ũ�⸦ �𸣸� ������ ���� �߻�.
//
//
//
//	return 0;
//}