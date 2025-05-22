//#include <iostream>
//using namespace std;
//
//
//class Fraction
//{
//private : 
//	int m_numerator;
//	int m_denominator;
//
//public:
//	//생성자를 만들지 않으면, 기본 생성자가 생성됨.
//	//생성자 ver1
//	Fraction()
//	{
//		m_numerator = 0;
//		m_denominator = 1;
//		cout << "Constructor Call" << endl;
//	}
//
//	//생성자 ver2
//	Fraction(const int& num_in, const int& den_in)
//	{
//		m_numerator = num_in;
//		m_denominator = den_in;
//	}
//
//	void print()
//	{
//		cout << m_numerator << " / " << m_denominator << endl;
//	}
//};
//
//class Second
//{
//public:
//	Second()
//	{
//		cout << "Second Constructor CAll" << endl;
//	}
//};
//
//
////생성자 안의 생성자?
//class First
//{
//	//클래스 안의 클래스 객체 멤버
//	Second sec;
//
//public : 
//	First()
//	{
//		cout << "First Constructor CALL" << endl;
//	}
//};
//
//
//
//int main() {
//	
//	Fraction frac;
//	frac.print();
//	
//	Fraction one_third(1, 3);
//	one_third.print();
//
//	//초기화 방식의 차이
//	Fraction one_thirds{ 1, 3 }; 
//	//멤버들이 public이면 생성자 없이 Uniform Initialization 가능.
//	//생성자가 없으면 Uniform Initialization 불가능
//	//but, 생성자 있으면 uniform initialization으로도 초기화 가능.
//	
//	//Fraction one_thirds( 1, 3 ); 
//	//둘의 가장 큰차이는 Uniform Initialization은 형변환을 허용 안함.
//	//Direct Initialization은 형변환이 가능함. 
//	//최근엔 Uniform Initialization방식이 좀 더 엄격하고 좋다는 의견이 많음.
//
//
//	//생성자 안의 생성자?
//	First fir;
//	//Second가 먼저 불리고, First의 생성자가 불림.
//	//클래스 멤버를 먼저 초기화하고 생성하기 때문.
//
//	return 0;
//}
