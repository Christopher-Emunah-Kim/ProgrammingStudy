#include <iostream>

using namespace std;

int main()
{
    //comma ��ȣ
	int a = 1, b = 2, c = 3;

    //comma operator
    int d;
	d = a, b; // d = 1, b = 2 <-- ���Կ����� �켱������ �����Ƿ�.
	d = (a, b); // d = 2, b = 2

    //comma operator
    int x = 3;
    int y = 10;
    int z = (++x, ++y);

	cout << "x: " << x << ", y: " << y << ", z: " << z << endl;

    return 0;
}