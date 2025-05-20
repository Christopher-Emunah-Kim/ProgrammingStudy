//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//
//int main()
//{
//	char myString[] = "string";
//
//	cout << sizeof(myString) / sizeof(myString[0]) <<endl;
//
//	myString[4] = '\0'; //이 경우 문자열의 출력이 4번째 인덱스에서 멈춤.
//
//	cout << myString << endl;
//
//	char myString2[255];
//	cin.getline(myString2, 255);
//
//	int ix = 0;
//	while (true)
//	{
//		if(myString2[ix] == '\0') break;
//		cout << myString2[ix] << " " << (int)myString2[ix] << endl;
//		++ix;
//	}
//
//	/*
//	(출력결과)
//
//		Hello Guys!
//		H 72
//		e 101
//		l 108
//		l 108
//		o 111
//		  32
//		G 71
//		u 117
//		y 121
//		s 115
//		! 33
//
//	*/
//
//	//Cstring 안에 정의된 함수
//	//strcpy() : 문자열 복사
//	char source[] = "Copy this!";
//	char dest[20];
//	strcpy(dest, source);
//	cout<< source <<endl;
//	cout << dest << endl;
//
//	//strcat() : 한 문자열 뒤에 다른 문자열 붙이기
//	//strcmp() : 문자열 동일한지 비교
//
//	strcat(dest, source);
//	cout << source << endl;
//	cout << dest << endl;
//
//	cout << strcmp(source, dest) << endl;
//
//	return 0;
//}