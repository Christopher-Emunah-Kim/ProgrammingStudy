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
//	myString[4] = '\0'; //�� ��� ���ڿ��� ����� 4��° �ε������� ����.
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
//	(��°��)
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
//	//Cstring �ȿ� ���ǵ� �Լ�
//	//strcpy() : ���ڿ� ����
//	char source[] = "Copy this!";
//	char dest[20];
//	strcpy(dest, source);
//	cout<< source <<endl;
//	cout << dest << endl;
//
//	//strcat() : �� ���ڿ� �ڿ� �ٸ� ���ڿ� ���̱�
//	//strcmp() : ���ڿ� �������� ��
//
//	strcat(dest, source);
//	cout << source << endl;
//	cout << dest << endl;
//
//	cout << strcmp(source, dest) << endl;
//
//	return 0;
//}