//#include <iostream>
//#include <string>
//using namespace std;
//
//// 기본 캐릭터 클래스
//class Character {
//protected:
//	string name;
//	int level;
//
//public:
//	Character(const string& n, int l) : name(n), level(l) {}
//
//	// const 함수: 객체의 상태를 바꾸지 않음
//	virtual void PrintInfo() const {
//		cout << "캐릭터 이름: " << name << ", 레벨: " << level << endl;
//	}
//};
//
//// 파생 클래스: Warrior
//class Warrior : public Character {
//private:
//	int strength;
//
//public:
//	Warrior(const string& n, int l, int s) : Character(n, l), strength(s) {}
//
//	// 오버라이딩 함수 (virtual + const 유지)
//	void PrintInfo() const override {
//		cout << "[전사] 이름: " << name << ", 레벨: " << level << ", 힘: " << strength << endl;
//	}
//};
//
//// const 참조로 객체를 출력 (복사 없음, 수정도 불가)
//void ShowCharacterInfo(const Character& c) {
//	c.PrintInfo();  // 다형성: 실제 객체 타입의 PrintInfo() 호출
//}
//
//// 값 전달 방식 예시 (복사 발생)
//void ModifyCharacterByValue(Character c) {
//	cout << "(값 전달로 복사된 캐릭터)" << endl;
//	c.PrintInfo();
//}
//
//// 포인터로 받되, const 제한이 없는 경우 (실제 원본 수정 가능)
//void UnsafeModify(Character* c) {
//	// 위험: 원본 수정 가능
//	cout << "(포인터로 전달받아 수정 가능)" << endl;
//	// c->SetLevel(999); // 이와 같은 수정 함수가 있다면 원본 변경 가능
//}
//
//int main() {
//	Warrior w("강철의 검객", 10, 150);
//
//	// const 참조로 안전하게 정보 출력
//	ShowCharacterInfo(w);  // 출력은 Warrior::PrintInfo()
//
//	// 값 전달은 복사 생성자 호출 (성능에 영향)
//	ModifyCharacterByValue(w);
//
//	// 포인터로 전달받아 수정 가능 (비추천)
//	UnsafeModify(&w);
//
//	return 0;
//}
