//#include <iostream>
//
//using namespace std;
//
//
//void doSomething(int students_scores[20]) //�����Ϸ��� �� �Ű������� �迭�� �����ͷ� ���(�迭�� �ƴ�)
//{
//	cout << &students_scores << endl; //000000837CB2F920 //Array ������ ����.(������ �ּҰ� �ٸ�)
//	cout << &students_scores[0]<< endl; //000000DA876FF5D0 //���� Array�� �ּҿ� ����.
//	cout << students_scores[0]<< endl;
//	cout << students_scores[1]<< endl;
//	cout << students_scores[2]<< endl;
//	cout << "Size in doSomething" << sizeof(students_scores) << endl; // 4Byte (������ ũ��)
//}
//
//
//int main()
//{
//	const int num_students = 20;
//	int students_scores[num_students] = {1,2,3,4,5};
//
//	cout << &students_scores << endl;		//000000DA876FF5D0 //array��ü�� �ּ�
//	cout << &(students_scores[0]) << endl; //000000DA876FF5D0 //array�� �ּҿ� ����.
//	cout << &(students_scores[1]) << endl; //000000DA876FF5D4 //4����Ʈ(int) ����
//	cout << &(students_scores[2]) << endl; //000000DA876FF5D8 //4����Ʈ(int) ����
//	cout << &(students_scores[3]) << endl; //000000DA876FF5DC //4����Ʈ(int) ����
//
//	cout << "Size in main" << sizeof(students_scores) << endl; // 80Byte Array�� ��üũ��
//	
//	//Array�� �Լ��� Parameter�� �־��ټ�����.
//	doSomething(students_scores);
//
//	
//
//	return 0;
//}