//#include <iostream>
//
//using namespace std;
//
//
//void doSomething(int students_scores[20]) //컴파일러는 이 매개변수를 배열의 포인터로 취급(배열이 아님)
//{
//	cout << &students_scores << endl; //000000837CB2F920 //Array 포인터 변수.(원본과 주소가 다름)
//	cout << &students_scores[0]<< endl; //000000DA876FF5D0 //원본 Array의 주소와 동일.
//	cout << students_scores[0]<< endl;
//	cout << students_scores[1]<< endl;
//	cout << students_scores[2]<< endl;
//	cout << "Size in doSomething" << sizeof(students_scores) << endl; // 4Byte (포인터 크기)
//}
//
//
//int main()
//{
//	const int num_students = 20;
//	int students_scores[num_students] = {1,2,3,4,5};
//
//	cout << &students_scores << endl;		//000000DA876FF5D0 //array전체의 주소
//	cout << &(students_scores[0]) << endl; //000000DA876FF5D0 //array의 주소와 동일.
//	cout << &(students_scores[1]) << endl; //000000DA876FF5D4 //4바이트(int) 차이
//	cout << &(students_scores[2]) << endl; //000000DA876FF5D8 //4바이트(int) 차이
//	cout << &(students_scores[3]) << endl; //000000DA876FF5DC //4바이트(int) 차이
//
//	cout << "Size in main" << sizeof(students_scores) << endl; // 80Byte Array의 전체크기
//	
//	//Array를 함수의 Parameter로 넣어줄수있음.
//	doSomething(students_scores);
//
//	
//
//	return 0;
//}