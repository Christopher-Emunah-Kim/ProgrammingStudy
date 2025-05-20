//#include <iostream>
//
//using namespace std;
//
///*
//선택정렬 내부 동작 순서
//			  value    index
//3 5 2 1 4       1		 3
//1 5 2 3 4		2		 2
//1 2 5 3 4		3		 3
//1 2 3 5 4		5		 3
//1 2 3 4 5
//
//*/
//
//void printArray(const int array[], const int length)
//{
//	for (int index = 0; index < length; ++index)
//	{
//		cout << array[index] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//
//	const int length = 5;
//	int array[length] = { 3, 5, 2, 1, 4};
//
//	printArray(array, length);
//	
//	//내림차순 정렬
//	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
//	{
//		int smallestIndex = startIndex;
//
//		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
//		{
//			if(array[smallestIndex] > array[currentIndex]) smallestIndex = currentIndex;
//		}
//		int temp = array[smallestIndex];
//		array[smallestIndex] = array[startIndex];
//		array[startIndex]	= temp;
//
//		printArray(array, length);
//	}
//
//	cout<<"\n"<<endl;
//
//
//	//엌ㅋㅋ 오름차순 정렬을 만들어버렸다..?
//	int maxIndex = -1;
//
//	for (int i = 0; i < length; ++i)
//	{
//		maxIndex = i;
//		for (int j = i; j < length; ++j)
//		{
//			if(array[maxIndex] < array[j])	maxIndex = j;
//		}
//		int temp = array[i];
//		array[i] = array[maxIndex];
//		array[maxIndex] = temp;
//		printArray(array, length);
//	}
//
//
//	return 0;
//}