//#include <iostream>
//using namespace std;
//
//
//class Cents
//{
//private:
//	int32_t m_cents;
//
//public:
//	Cents(int32_t cents = 0) { m_cents = cents;  }
//	Cents(int32_t cents) { m_cents = cents;  }
//	int32_t getCents() const { return m_cents; }
//
//	int32_t& getCents() { return m_cents; }
//
//	/*friend Cents operator + (const Cents& c1, const Cents& c2)
//	{
//		return Cents(c1.getCents() + c2.getCents());
//	}*/
//
//	Cents operator + (const Cents& other)
//	{
//		return Cents(this->m_cents + other.m_cents);
//	}
//};
//
//
////Cents operator + (const Cents& c1, const Cents& c2)
////{
////	return Cents(c1.getCents() + c2.getCents());
////}
//
//
//int main()
//{
//	Cents cents1(6);
//	Cents cents2(8);
//
//	cout << (cents1 + cents2 + Cents(6) + Cents(10)).getCents() << endl;
//
//
//
//	return 0;
//}