#include <iostream>
#include <bitset> //������ ��ȯ�� ����	�������


using namespace std;
//
//int main()
//{
//	//bitwise operator
//	//bitwise left shift ( << )
//	unsigned int a = 3;
//	cout << bitset<8>(a) << endl; //0000 0011 (3)
//
//	unsigned int b = a << 2;
//	cout << bitset<8>(b) << endl; //0000 1100 (12) 
//	//��������� 3�� 2��Ʈ �������� �̵���Ŵ = 4(2*2)�� ���ѰͰ� ����.
//	//2�� ������ ���ϰ� ������ ��Ʈ ����Ʈ �����ڸ� ����ϸ� ��.
//
//
//	//bitwise right shift ( >> )
//	unsigned int c = 1024;
//
//	cout << bitset<16>(c) << endl; //0000 0011 1110 0000 (1024)
//	cout << bistet<16>(c >> 2) << endl; //0000 0000 0011 1110 (256)
//	cout << bistet<16>(c >> 3) << endl; //0000 0000 0001 1111 (128)
//	cout << bistet<16>(c >> 4) << endl; //0000 0000 0000 1111 (64)
//	//��������� 1024�� 2��Ʈ ���������� �̵���Ŵ = 4(2*2)�� �����Ͱ� ����.
//
//	//bitwise NOT ( ~ )
//	//��Ʈ ���� ������. 0�� 1��, 1�� 0���� �ٲ���.
//	unsigned int d = 3;
//	cout << bitset<8>(d) << endl; //0000 0011 (3)
//	cout << bitset<8>(~d) << endl; //1111 1100 (3�� ��Ʈ ����)
//
//	//bitwise AND ( & ) OR ( | )  XOR ( ^ )
//	unsigned int e = 0b1100; //12
//	unsigned int f = 0b0110; //6	
//	cout << bitset<4>(e & f) << endl; //0100(4)
//	cout << bitset<4>(e | f) << endl; //1110(14)
//	cout << bitset<4>(e ^ f) << endl; //1010(10)
//
//	//Quiz
//	// 0110 >> 2 -> decimal�� ��ȯ�ϸ�? 
//	// 0110 >> 2 = 0001
//	// 0001 = 1
//
//	// 0110 << 2 -> decimal�� ��ȯ�ϸ�?
//	// 0110 << 2 = 1000
//	// 1000 = 8
//
//	//5|12 ?
//	// 5 = 0101
//	// 12 = 1100
//	// 5|12 = 1101
//	// 1101 = 13
//
//	//5&12 ?
//	// 5 = 0101
//	// 12 = 1100
//	// 5&12 = 0100
//	// 0100 = 4
//
//
//
//	return 0;
//}