//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//	//���� ������ ����
//	int * ptr = nullptr;
//	int ** dptr = nullptr;
//
//	int value = 5;
//
//	ptr = &value;
//	dptr = &ptr;
//
//	cout << ptr << " " << *ptr << " " << &ptr << endl; 
//	// 00000058F82FF554(�������� ����)    5(������ de-reference)    00000058F82FF518(������ �ּ�)
//	cout << dptr << " " << *dptr << " " << &dptr << endl; 
//	// 00000058F82FF518(������������ ����) 00000058F82FF554(������ de-reference) 00000058F82FF538(���������� �ּ�)
//	cout << **dptr << endl;
//	// ���� �������� ��. 
//	
//
//	
//	const int row = 3;
//	const int col = 5;
//
//	const int s2da[row][col] =
//	{
//		{1,2,3,4,5},
//		{6,7,8,9,10},
//		{11,12,13,14,15}
//	};
//
//
//
//	//���������� �迭 �����1
//	//col �迭�� �����ͷ� �����.
//	int *r1 = new int[col] {1,2,3,4,5};
//	int* r2 = new int[col] {6, 7, 8, 9, 10};
//	int* r3 = new int[col] {11, 12, 13, 14, 15};
//	
//	//col�迭�� ������ �迭�� �����ͷ� �����
//	int ** rows = new int*[row] {r1, r2, r3};
//
//	for(int r = 0; r < row; ++r)
//	{
//		for(int c = 0; c < col; ++c)
//			cout << rows[r][c] << " ";
//		cout << endl;
//	}
//
//	//�޸� ���� ��������
//	delete[] r1;
//	delete[] r2;
//	delete[] r3;
//	delete[] rows;
//
//
//	//���������� �迭 ����� 2
//	//���� ������ �迭 ����
//	int ** matrix = new int*[row];
//
//	//�迭 ���� Row������ �迭 ä���
//	for (int r = 0 ; r < row ; ++r)
//		matrix[r] = new int[col];
//
//	//�迭 ���� �� ä���
//	for(int r= 0; r< row; ++r)
//		for(int c= 0; c < col; ++c)
//			matrix[r][c] = s2da[r][c];
//	//print console
//	for (int r = 0; r < row; ++r)
//	{
//		for (int c = 0; c < col; ++c)
//			cout << matrix[r][c] << " ";
//		cout << endl;
//	}
//
//	//�޸� ������ �ݺ������� ó���ϱ�
//	for (int r = 0; r < row; ++r)
//		delete[] matrix[r];
//
//	delete[] matrix;
//
//
//
//	//�Ϲ� 2���� �迭 �����
//	int* matrix2 = new int[row * col];
//
//	for (int r = 0; r < row; ++r)
//	{
//		for (int c = 0; c < col; ++c)
//			matrix2[c + col * r] = s2da[r][c];
//	}
//
//	//print console
//	for (int r = 0; r < row; ++r)
//	{
//		for (int c = 0; c < col; ++c)
//			cout << matrix2[c + col * r] << " ";
//		cout << endl;
//	}
//
//	delete[] matrix2;
//
//	return 0;
//}