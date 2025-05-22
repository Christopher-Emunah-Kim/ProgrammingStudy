//#include <iostream> 
//#include <vector>
//
//using namespace std;  
//
////Object : 개념
////Friend의 데이터들(name, addres, age, height, weight)과
////기능(print)를 하나의 객체 안에 묶어둔것.
//class Friend
//{
//public ://Access Specifier(접근제한자) _ public/private/protected
//	string name;
//	string address;
//	int age;
//	double height;
//	double weight;
//
//	//멤버함수니까 dot operator를 통해 접근할 필요 없음.
//	void print()
//	{
//		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
//	}
//};
//
//
//
//int main()
//{
//	Friend jj{ "Jack Jack", "Uptorn", 2, 30, 10 }; //Instanciation. jj는 Friend클래스의 Instance.
//	//메모리 상에 실제 데이터를 가지고 존재하는 객체.
//
//	jj.print();
//
//	//아주 간편해졌다.
//	vector<Friend> my_friends;
//	my_friends.resize(2);;
//
//	for (auto& ele : my_friends)
//		ele.print();
//
//	//하나하나를 컨트롤하는 것은 실수의 위험성을 높인다.
//	/*vector<string> name_vec;
//	vector<string> addr_vec;
//	vector<int> age_vec;
//	vector<double> height_vec;
//	vector<double> weight_vec;
//
//	print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);*/
//
//	return 0;
//}
//
