#include <iostream>
#include <fstream> //파일입출력 헤더
using namespace std;

class Point
{
private:
    double m_x, m_y, m_z;

public:
    Point(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z) {}

    double getX() { return m_x; }
    double getY() { return m_y; }
    double getZ() { return m_z; }

    void print()
    {
        cout << m_x << " " << m_y << " " << m_z << endl;
    }

    friend std::ostream& operator << (std::ostream& out, const Point& point)
    {
        out << point.m_x << " " << point.m_y << " " << point.m_z; 
        return out; //리턴타입으로 ostream객체를 반환해 chaining이 가능함.
    }

    friend std::istream& operator >> (std::istream& in, Point& point) 
    {
		in >> point.m_x >> point.m_y >> point.m_z;
		return in;
    }
};

int main()
{
	ofstream of("out.txt"); //파일출력 세팅


    //Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);//출력
	Point p1, p2;
	cin >> p1 >> p2; //입력

    cout << p1 << " " << p2 << endl; 

	//파일 입출력 맛보기
	of << p1 << " " << p2 << endl;

	of.close();

    return 0;
}