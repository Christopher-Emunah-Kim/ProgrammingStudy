//#include <iostream>
//#include <cstdint>
//#include <vector>
//
//using namespace std;
//
////사용자 정의 자료형
//struct Person
//{
//	double	height = 3.0;
//	float	weight = 200.0;
//	int 	age = 100;
//	string	name = "Mr.Incredible";
//	//초기화가 되어있어도 생성 당시 초기화값을 바꿀 수 있음. 
//	//초기화값을 지정하지 않으면 디폴트 값으로 초기화.
//	
//	void printPerson() //구조체의 멤버를 통해 직접 접근하여 출력가능.
//	{
//		cout << "이름: " << name << endl;
//		cout << "키: " << height << endl;
//		cout << "몸무게: " << weight << endl;
//		cout << "나이: " << age << endl;
//	}
//};
//
//struct Family
//{
//	Person mom;
//	Person dad;
//	Person me;
//}; //구조체 안의 구조체 구조 가능
//
//Person GetMe()
//{
//	Person me{ 2.0, 50.0f, 28, "John Doe" }; 
//
//	return me;
//}
//
////데이터정렬(Data Alignment)
////구조체의 메모리 최적화 _데이터 정렬을 위해 padding을 사용함.
//struct Employee
//{
//	short	id;     //2byte
//	int     age;    //4byte
//	double	salary; //8byte
//};
//
//int main()
//{
//    Person me;
//	me.height = 1.75;
//	me.weight = 70.5f;
//	me.age = 30;
//	me.name = "John Doe";
//
//	Person me2;
//	me2 = me;
//	me2.printPerson(); //구조체->구조체의 복사연산자 사용가능.
//
//	Person mom{ 2.0, 50.0f, 28, "Jane Doe" }; //초기화 리스트
//	Person dad;
//	
//	me.printPerson(); //구조체의 멤버를 통해 직접 접근하여 출력가능.
//
//	Person me_from_func = GetMe(); //구조체 반환형 함수로 정보 전달 가능.
//
//	return 0;
//}