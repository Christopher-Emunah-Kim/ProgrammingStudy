#include <iostream>
#include <bitset> //이진수 변환을 위한	헤더파일


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
//	//결과적으로 3을 2비트 왼쪽으로 이동시킴 = 4(2*2)를 곱한것과 같음.
//	//2의 제곱을 곱하고 싶을땐 비트 시프트 연산자를 사용하면 편리.
//
//
//	//bitwise right shift ( >> )
//	unsigned int c = 1024;
//
//	cout << bitset<16>(c) << endl; //0000 0011 1110 0000 (1024)
//	cout << bistet<16>(c >> 2) << endl; //0000 0000 0011 1110 (256)
//	cout << bistet<16>(c >> 3) << endl; //0000 0000 0001 1111 (128)
//	cout << bistet<16>(c >> 4) << endl; //0000 0000 0000 1111 (64)
//	//결과적으로 1024를 2비트 오른쪽으로 이동시킴 = 4(2*2)를 나눈것과 같음.
//
//	//bitwise NOT ( ~ )
//	//비트 반전 연산자. 0은 1로, 1은 0으로 바꿔줌.
//	unsigned int d = 3;
//	cout << bitset<8>(d) << endl; //0000 0011 (3)
//	cout << bitset<8>(~d) << endl; //1111 1100 (3의 비트 반전)
//
//	//bitwise AND ( & ) OR ( | )  XOR ( ^ )
//	unsigned int e = 0b1100; //12
//	unsigned int f = 0b0110; //6	
//	cout << bitset<4>(e & f) << endl; //0100(4)
//	cout << bitset<4>(e | f) << endl; //1110(14)
//	cout << bitset<4>(e ^ f) << endl; //1010(10)
//
//	//Quiz
//	// 0110 >> 2 -> decimal로 변환하면? 
//	// 0110 >> 2 = 0001
//	// 0001 = 1
//
//	// 0110 << 2 -> decimal로 변환하면?
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