//#include <iostream>
//
//using namespace std;
//
//
//struct Rectangle {
//	int length;
//	int width;
//};
//
//enum StudentName
//{
//	JACK,
//	DASH,
//	VIOLET,
//	NUM_STUDENTS,
//};
//
//int main()
//{
//	int student_scores[5];
//
//	cout << sizeof(student_scores) << endl;
//	
//	student_scores[0] = 100; //first elements(0 index) initialization.
//	student_scores[1] = 80;
//	student_scores[2] = 90;
//	student_scores[3] = 60;
//	student_scores[4] = 30;
//
//	int student_scores2[5] = {100, 80, 90, 60, 30};
//	
//	int student_scores3[5]{100, 80, 90, 60, 30}; //Uniform Initialization
//
//
//
//	//����ü�� �迭�� ���� �� ����
//	Rectangle rect_arr[10];
//	cout << sizeof(rect_arr) << endl; //(4+4)*10
//
//	//enum�� �迭�� ���� �� ����.
//	//(�������� ������ ���(������ �л�+1)�� �迭ũ�� ����)
//	int students[NUM_STUDENTS];
//
//	students[JACK] = 0;
//	students[DASH] = 100;
//
//	//Array�� ������ Ÿ�ӿ� ũ�Ⱑ �����Ǵ� ���� �迭�̱� ������
//	int num_teachers = 0;
//	cin >> num_teachers;
//
//	//int teachers_age[num_teachers];
//	//��Ÿ�ӿ��� �̳����� ���� �� ����.
//	//�����Ҵ����� �ϸ��.
//
//	//�׷� ��� �ϴ���? ������ Ÿ�ӿ� ũ�Ⱑ �����Ǵ� const����� �����.
//	const int num_teachers2 = 5;
//	int teachers[num_teachers2];
//
//	return 0;
//}