//#include <iostream>
//using namespace std;
//
////Class Composition
////Has-A관계. 객체를 다른 객체의 멤버로 합류시켜 인터페이스만을 사용하도록 함.
////결합도가 낮고 유연성이 높음(런타임 중 다른 객체로 교체 가능)
////재사용성이 높음(다수의 기능객체를 조합 가능)
//
////Class Inheritance(Is-A)관계의 한계(잘못된 설계 예시)
////class Bird
////{
////public:
////	virtual void fly() { cout << "날 수 있다" << endl; }
////
////};
////
////
////class Penguin : public Bird
////{
////public: 
////	//fly() override ???
////	//펭귄은 새지만(IS-A), 상속받은 기능인 fly는 부적절함.
////};
//
//
////Class Composition(HAS-A)관계 활용
////날다(기능)
//class FlyBehavior
//{
//public:
//	virtual void fly() = 0;
//	virtual ~FlyBehavior() = default;
//};
//
//class CanFly : public FlyBehavior
//{
//public :
//	void fly() override
//	{
//		cout << "Can Fly" << endl;
//	}
//};
//
//class CannotFly : public FlyBehavior
//{
//public:
//	void fly() override
//	{
//		cout << "Cannot Fly" << endl;
//	}
//};
//
//class Bird
//{
//protected :
//	FlyBehavior* flyBehavior;
//
//public :
//	Bird(FlyBehavior* fb) : flyBehavior{ fb } {}
//	void doFly()
//	{
//		flyBehavior->fly();
//	}
//	virtual ~Bird()
//	{
//		delete flyBehavior;
//	}
//};
//
//class Penguin : public Bird
//{
//public:
//	Penguin() : Bird(new CannotFly()) {}
//};
//
//class Sparrow : public Bird
//{
//public:
//	Sparrow() : Bird(new CanFly()) {}
//};
//
//
//
//int main()
//{
//	return 0;
//}