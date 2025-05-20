#include <iostream>

using namespace std;


void pointArray(int array[]) //���������� int* array�� ����.
{
	cout << sizeof(array) << endl;
}

int main()
{
	int array[5] = {9, 6, 5, 3, 1};

	cout << array[0] << " " << array[1] << endl; //9 6
	cout << array << endl; //000000703EEFFA58
	cout << &(array[0]) << endl; //000000703EEFFA58
	
	cout << *array << endl; //�迭�� �ּ� : ù���� �ε������� �ּ� : 9


	int* ptr = array; //pointer(int�����Ͷ�� �ǹ�)
	cout << ptr << endl;  //000000703EEFFA58
	cout << *ptr << endl; //9�� ����. de-reference(�ּҿ� ������ ���� �����´ٴ� �ǹ�)
	
	//������ ������ ũ��� 64��Ʈ ���� 8����Ʈ. 32��Ʈ ���� 4����Ʈ.
	//�Լ� ���ڷ� ���޵ɋ� �Ϲ����� ����ȯ(decay)�� �Ͼ.
	pointArray(array);

	return 0;
}