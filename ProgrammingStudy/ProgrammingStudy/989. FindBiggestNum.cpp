#include <iostream>

using namespace std;


int main()
{
	srand(time(NULL)); // ���� �õ� �ʱ�ȭ

	int arr[100];
	for (int& i : arr)
	{
		int n = rand() % 100 + 1; // 1~100 ������ ���� ���� ����
		arr[i] = n; // �迭�� ���� ���� ����
	}
	// �迭�� �ִ밪 ã��
	int maxNum = arr[0];
	for (int i : arr)
	{
		if (i > maxNum)
		{
			maxNum = i; // �ִ밪 ����
		}
	}


	return 0;
}