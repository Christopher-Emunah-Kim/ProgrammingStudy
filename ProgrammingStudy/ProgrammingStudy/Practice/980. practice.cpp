#include <iostream>

using namespace std;

int main()
{
    //comma 기호
	int a = 1, b = 2, c = 3;

    //comma operator
    int d;
	d = a, b; // d = 1, b = 2 <-- 대입연산의 우선순위가 높으므로.
	d = (a, b); // d = 2, b = 2

    //comma operator
    int x = 3;
    int y = 10;
    int z = (++x, ++y);

	cout << "x: " << x << ", y: " << y << ", z: " << z << endl;

    return 0;
}