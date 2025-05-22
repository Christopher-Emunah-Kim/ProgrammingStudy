//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//	virtual void Speak() const {
//		cout << "동물이 소리냅니다." << endl;
//	}
//};
//
//class Dog : public Animal {
//public:
//	void Speak() const override {
//		cout << "멍멍!" << endl;
//	}
//
//	void WagTail() const {
//		cout << "꼬리를 흔든다!" << endl;
//	}
//};
//
//void PrintAnimal(Animal animal) {  // ← 값으로 받음!
//	animal.Speak(); // 어떤 함수가 호출될까?
//}
//
//int main() {
//	Dog dog;
//	PrintAnimal(dog); // Dog 객체를 Animal 값으로 전달
//	return 0;
//}
//
///*
//Dog 객체 메모리
// ┌──────────────────────┐
// │ Animal 부분 (vptr 등)│
// │ Dog 고유 멤버들      │  ← 이 부분은 잘림!
// └──────────────────────┘
//PrintAnimal(dog);에서 dog 객체를 값으로 전달하니,
// Animal 클래스에 해당하는 부분만 복사되고,
// Dog 클래스의 정보는 복사되지 않음.
//이로 인해 virtual 함수도 부모 기준으로 동작하게 되고,
// → Dog::Speak()가 아닌 Animal::Speak()가 호출되는 것.
//
//원본객체의 vptr을 유지시키기 위해 반드시 참조나 포인터로 전달할것!
//*/