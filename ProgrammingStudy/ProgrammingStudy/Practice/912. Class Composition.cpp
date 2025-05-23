#include <iostream>
#include <string>
using namespace std;

class A
{
private:
	int32_t m_value = 1;
	friend void doSomething(A& a);
};

void doSomething(A& a)
{
	cout << a.m_value << endl;
}



int main() {
	
	A a;
	doSomething(a);

	return 0;
}
