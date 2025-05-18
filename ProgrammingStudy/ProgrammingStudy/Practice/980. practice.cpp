#include <iostream>
#include <limits> // numeric_limits를 사용하기 위한 헤더 파일
#include <cmath> // math.h를 사용하기 위한 헤더 파일

using namespace std;

int main()
{
    float f;
    double d;
    long double ld;

	//cout < numeric_limits<float>::lowest() << endl; // float의 최소값
	//cout < numeric_limits<double>::lowest() << endl; // float의 최소값
	//cout < numeric_limits<long double>::lowest() << endl; // float의 최소값

	double zero = 0.0;
	double posinf = 5.0 / zero; // 양의 무한대
	double neginf = -5.0 / zero; // 음의 무한대
	double nan = zero / zero; // NaN (Not a Number)

	cout << posinf << " " << std::isnan(posinf) << endl;
	cout << neginf << " " << std::isnan(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;

    return 0;
}