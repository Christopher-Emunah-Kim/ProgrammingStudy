//#include <iostream>
//#include <cstdint>
//#include <vector>
//
//using namespace std;
//
////����� ���� �ڷ���
//struct Person
//{
//	double	height = 3.0;
//	float	weight = 200.0;
//	int 	age = 100;
//	string	name = "Mr.Incredible";
//	//�ʱ�ȭ�� �Ǿ��־ ���� ��� �ʱ�ȭ���� �ٲ� �� ����. 
//	//�ʱ�ȭ���� �������� ������ ����Ʈ ������ �ʱ�ȭ.
//	
//	void printPerson() //����ü�� ����� ���� ���� �����Ͽ� ��°���.
//	{
//		cout << "�̸�: " << name << endl;
//		cout << "Ű: " << height << endl;
//		cout << "������: " << weight << endl;
//		cout << "����: " << age << endl;
//	}
//};
//
//struct Family
//{
//	Person mom;
//	Person dad;
//	Person me;
//}; //����ü ���� ����ü ���� ����
//
//Person GetMe()
//{
//	Person me{ 2.0, 50.0f, 28, "John Doe" }; 
//
//	return me;
//}
//
////����������(Data Alignment)
////����ü�� �޸� ����ȭ _������ ������ ���� padding�� �����.
//struct Employee
//{
//	short	id;     //2byte
//	int     age;    //4byte
//	double	salary; //8byte
//};
//
//int main()
//{
//    Person me;
//	me.height = 1.75;
//	me.weight = 70.5f;
//	me.age = 30;
//	me.name = "John Doe";
//
//	Person me2;
//	me2 = me;
//	me2.printPerson(); //����ü->����ü�� ���翬���� ��밡��.
//
//	Person mom{ 2.0, 50.0f, 28, "Jane Doe" }; //�ʱ�ȭ ����Ʈ
//	Person dad;
//	
//	me.printPerson(); //����ü�� ����� ���� ���� �����Ͽ� ��°���.
//
//	Person me_from_func = GetMe(); //����ü ��ȯ�� �Լ��� ���� ���� ����.
//
//	return 0;
//}