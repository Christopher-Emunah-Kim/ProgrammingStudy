//#include <iostream>  
//#include <array>
//#include <functional>
//
//using namespace std;  
//
//int func()
//{
//	return 5;
//}
//
//int goo()
//{
//	return 10;
//}
//
//
//
////�Լ������͸� �Լ� �Ķ���ͷ� ���
//bool isEven(const int& number)
//{
//	if (number % 2 == 0) return true;
//}
//
//bool isOdd(const int& number)
//{
//	if (number % 2 != 0) return true;
//}
////�Լ������͸� �Ķ���ͷ� ���
//void printNumber(const array<int, 10>& my_array, bool (*check_fcn)(const int&))
//{
//	/*for (auto element : my_array)
//	{
//		if (element % 2 == 0) cout << element;
//	}*/
//}
//
//
////C++11 std::function
//void printNumber_v(const array<int, 10>& my_array, std::function<bool(const int&)> check_fcn = isEven)
//{
//	for (auto element : my_array)
//	{
//		if (check_fcn(element)== true) cout << element;
//	}
//}
//
//
//int main()  
//{  
//	cout << func << endl; //00007FF6B96844B0 �Լ����� �ּҰ� ����.
//
//	//Function Pointer
//	int (*fcnptr) () = func; //�Ķ������ ���µ� ��ġ�ؾ���.
//	//�ʱ�ȭ�� �Լ��� �̸��� ����.
//
//	//�Լ������͸� ���� �Լ� ȣ��
//	cout << fcnptr() << endl; //��°� : 5
//
//	//�ٸ� �Լ��ּҸ� ����
//	fcnptr = goo; 
//
//	//�Լ������͸� ���� �Լ� ȣ��
//	cout << fcnptr() << endl; //��°� :10
//
//
//	//�Լ������͸� �Լ� �Ķ���ͷ� ���
//	std::array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9};
//
//	printNumber(my_array, isEven); //�Լ��̸���  ���� �μ��� ���
//	printNumber(my_array, isOdd);
//
//
//	//C++11 std::function
//	std::function<bool(const int&)> fptr = isEven;
//	printNumber_v(my_array, fptr);
//
//	fptr = isOdd;
//	printNumber_v(my_array, fptr);
//
//
//   return 0;  
//}