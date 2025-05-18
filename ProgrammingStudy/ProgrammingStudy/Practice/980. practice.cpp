#include <iostream>
#include <limits> // numeric_limits�� ����ϱ� ���� ��� ����
#include <cmath> // math.h�� ����ϱ� ���� ��� ����

using namespace std;

int main()
{
    float f;
    double d;
    long double ld;

	//cout < numeric_limits<float>::lowest() << endl; // float�� �ּҰ�
	//cout < numeric_limits<double>::lowest() << endl; // float�� �ּҰ�
	//cout < numeric_limits<long double>::lowest() << endl; // float�� �ּҰ�

	double zero = 0.0;
	double posinf = 5.0 / zero; // ���� ���Ѵ�
	double neginf = -5.0 / zero; // ���� ���Ѵ�
	double nan = zero / zero; // NaN (Not a Number)

	cout << posinf << " " << std::isnan(posinf) << endl;
	cout << neginf << " " << std::isnan(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;

    return 0;
}