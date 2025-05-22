#include <iostream>
using namespace std;


class B
{
private:
	int m_b;

public:
	B(const int& m_b_in) : m_b(m_b_in)
	{ }
};


class Something
{
private:
	//멤버변수(non-static일 경우)의 초기값도 설정해줄수있으나, 
	//생성자가 있다면 생성자가 우선
	int m_i= 10;
	double m_d = 4.15;
	char m_c = 'c';
	int m_arr[5] = { 100, 200, 300, 400, 500 };
	B m_b{ 1024 };

public:
	//Member Initializer List
	//Something() : m_i(1), m_d(3.14), m_c('a')b //Direct Initialization
	Something() : m_i{ 1 }, m_d{ 3.14 }, m_c{ 'a' }, m_arr{ 1,2,3,4,5 }, m_b{ m_i - 1 } //Uniform Initialization
	{
		/*m_i = 1;
		m_d = 3.14;
		m_c = 'a';*/
	}

	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
		for (auto& e : m_arr)
		{
			cout << e << " ";
		}
		cout << endl;
	}
};


int main() {
	

	

	return 0;
}
