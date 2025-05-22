//#include <iostream>
//using namespace std;
//
//// 기반 클래스 (부모)
//class Animal {
//public:
//	virtual void Speak() const { // virtual: 다형성의 핵심!
//		cout << "동물이 소리를 냅니다." << endl;
//	}
//};
//
//// 파생 클래스 1
//class Dog : public Animal {
//public:
//	void Speak() const override {
//		cout << "멍멍!" << endl;
//	}
//};
//
//// 파생 클래스 2
//class Cat : public Animal {
//public:
//	void Speak() const override {
//		cout << "야옹!" << endl;
//	}
//};
//
//// 다형성 사용
//void MakeAnimalSpeak(const Animal& animal) {
//	animal.Speak(); // 어떤 동물이든 이 함수 하나로 호출 가능
//}
//
//int main() {
//	Dog d; // 자식 인스턴스
//	Cat c; // 자식 인스턴스
//
//	MakeAnimalSpeak(d); // "멍멍!" 출력
//	MakeAnimalSpeak(c); // "야옹!" 출력
//
//
//	/*
//	dog 객체 메모리
//	 ┌─────────────┐
//	 │ vptr ------┐│   --> Dog의 vtable (함수 테이블)
//	 └─────────────┘
//
//	Dog vtable
//	 ┌──────────────────────────┐
//	 │ 주소: &Dog::Speak()      │
//	 └──────────────────────────┘
//
//	Animal vtable
//	 ┌──────────────────────────┐
//	 │ 주소: &Animal::Speak()   │
//	 └──────────────────────────┘
//
//	//MakeAnimalSpeak(Animal& animal)에 dog 객체를 전달
//	//animal.Speak() 호출
//	//animal은 Animal& 타입이지만, 내부적으로 vptr은 Dog의 vtable을 가리킴
//	//vptr → Dog의 vtable → Dog::Speak()로 연결되어 오버라이딩 된 함수가 호출됨
//
//	*/
//
//	return 0;
//}