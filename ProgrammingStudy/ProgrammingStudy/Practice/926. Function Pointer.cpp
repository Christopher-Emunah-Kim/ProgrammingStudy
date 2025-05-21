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
////함수포인터를 함수 파라미터로 사용
//bool isEven(const int& number)
//{
//	if (number % 2 == 0) return true;
//}
//
//bool isOdd(const int& number)
//{
//	if (number % 2 != 0) return true;
//}
////함수포인터를 파라미터로 사용
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
//	cout << func << endl; //00007FF6B96844B0 함수에도 주소가 있음.
//
//	//Function Pointer
//	int (*fcnptr) () = func; //파라미터의 형태도 일치해야함.
//	//초기화는 함수의 이름을 대입.
//
//	//함수포인터를 통한 함수 호출
//	cout << fcnptr() << endl; //출력값 : 5
//
//	//다른 함수주소를 대입
//	fcnptr = goo; 
//
//	//함수포인터를 통한 함수 호출
//	cout << fcnptr() << endl; //출력값 :10
//
//
//	//함수포인터를 함수 파라미터로 사용
//	std::array<int, 10> my_array{ 0,1,2,3,4,5,6,7,8,9};
//
//	printNumber(my_array, isEven); //함수이름을  통해 인수로 사용
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