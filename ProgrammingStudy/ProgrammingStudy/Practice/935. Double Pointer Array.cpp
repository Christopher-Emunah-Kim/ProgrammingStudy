//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//	//이중 포인터 개념
//	int * ptr = nullptr;
//	int ** dptr = nullptr;
//
//	int value = 5;
//
//	ptr = &value;
//	dptr = &ptr;
//
//	cout << ptr << " " << *ptr << " " << &ptr << endl; 
//	// 00000058F82FF554(포인터의 원본)    5(원본의 de-reference)    00000058F82FF518(포인터 주소)
//	cout << dptr << " " << *dptr << " " << &dptr << endl; 
//	// 00000058F82FF518(더블포인터의 원본) 00000058F82FF554(원본의 de-reference) 00000058F82FF538(더블포인터 주소)
//	cout << **dptr << endl;
//	// 더블 포인터의 값. 
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
//	//더블포인터 배열 만들기1
//	//col 배열을 포인터로 만들기.
//	int *r1 = new int[col] {1,2,3,4,5};
//	int* r2 = new int[col] {6, 7, 8, 9, 10};
//	int* r3 = new int[col] {11, 12, 13, 14, 15};
//	
//	//col배열의 포인터 배열을 포인터로 만들기
//	int ** rows = new int*[row] {r1, r2, r3};
//
//	for(int r = 0; r < row; ++r)
//	{
//		for(int c = 0; c < col; ++c)
//			cout << rows[r][c] << " ";
//		cout << endl;
//	}
//
//	//메모리 해제 잊지말기
//	delete[] r1;
//	delete[] r2;
//	delete[] r3;
//	delete[] rows;
//
//
//	//더블포인터 배열 만들기 2
//	//더블 포인터 배열 생성
//	int ** matrix = new int*[row];
//
//	//배열 내부 Row포인터 배열 채우기
//	for (int r = 0 ; r < row ; ++r)
//		matrix[r] = new int[col];
//
//	//배열 내부 값 채우기
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
//	//메모리 해제도 반복분으로 처리하기
//	for (int r = 0; r < row; ++r)
//		delete[] matrix[r];
//
//	delete[] matrix;
//
//
//
//	//일반 2차원 배열 만들기
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