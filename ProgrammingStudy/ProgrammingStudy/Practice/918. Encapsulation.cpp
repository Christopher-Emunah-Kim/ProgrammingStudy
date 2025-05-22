//#include <iostream>
//using namespace std;
//
////struct에서는 기본public이기 때문에 access가능
////struct Date
////{
////	int m_month;
////	int m_day;
////	int m_year;
////};
//
////class에서는 기본 private이기 때문에 
////public 접근을 허용해줘야만 가능
//class Date
//{
////private:(기본) //Access Specifier
//	int m_month;
//	int m_day;
//	int m_year;
//
//public: 
//	//Access Fucntions
//	void SetDate(const int& month_input, const int& day_input, const int& year_input)
//	{
//		m_month = month_input;
//		m_day = day_input;
//		m_year = year_input;
//	}
//
//	void SetMonth(const int& month_input)
//	{
//		m_month = month_input;
//	}
//	//마찬가지로 SetDay, SetYear가능.. //Setters
//
//	const int& GetDay() //Getters
//	{
//		return m_day;
//	}
//
//	//같은 클래스의 인스턴스끼리는 멤버 접근이 자유롭다.
//	void CopyFrom(const Date& other)
//	{
//		m_month = other.m_month;
//		m_day = other.m_day;
//		m_year = other.m_year;
//	}
//
//};
//
//
//int main() {
//	
//	Date today;
//	/*today.m_month = 8;
//	today.m_day = 4;
//	today.m_year = 2025;*/
//	
//	//접근 함수(Getter, Setter)를 통해 private멤버에 간접접근 가능.
//	today.SetDate(8, 4, 2025);
//	today.SetMonth(8);
//
//	cout << today.GetDay() << endl;
//
//	//같은 클래스의 인스턴스끼리는 멤버 접근이 자유롭다.
//	Date copy;
//	copy.CopyFrom(today);
//	cout << copy.GetDay() << endl;
//
//	return 0;
//}
