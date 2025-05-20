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
//	//구조체도 배열로 만들 수 있음
//	Rectangle rect_arr[10];
//	cout << sizeof(rect_arr) << endl; //(4+4)*10
//
//	//enum도 배열로 만들 수 있음.
//	//(열거형의 마지막 요소(마지막 학생+1)로 배열크기 전달)
//	int students[NUM_STUDENTS];
//
//	students[JACK] = 0;
//	students[DASH] = 100;
//
//	//Array는 컴파일 타임에 크기가 결정되는 정적 배열이기 때문에
//	int num_teachers = 0;
//	cin >> num_teachers;
//
//	//int teachers_age[num_teachers];
//	//런타임에는 이내용을 받을 수 없음.
//	//동적할당으로 하면됨.
//
//	//그럼 어떻게 하느냐? 컴파일 타임에 크기가 고정되는 const상수를 쓰면됨.
//	const int num_teachers2 = 5;
//	int teachers[num_teachers2];
//
//	return 0;
//}