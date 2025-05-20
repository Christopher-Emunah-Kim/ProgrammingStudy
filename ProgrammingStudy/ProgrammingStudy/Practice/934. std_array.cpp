//#include <iostream>  
//#include <array> 
//#include <algorithm>
//
//using namespace std;  
//
//void printLength(const array<int, 5>& array) //array가 크면 복사비용이 크니까 const&사용.
//{
//	cout << array.size() << endl;
//}
//
//
//int main()  
//{  
//
//	//std::array
//   array<int, 5> my_arr = { 1, 2, 3, 4, 5 }; 
//   my_arr = {0,1,2,3,4}; //대입
//
//   cout << my_arr[10] << endl;
//   cout << my_arr.at(10) << endl; //예외처리(접근했을때 무효하면 예외처리)
//   
//   printLength(my_arr);
//
//
//
//   //sorting
//   array<int, 5> my_arr2 = { 1, 21, 3, 40, 5 };
//
//   for(auto& element : my_arr2)
//		cout << element << " ";
//   cout <<endl;
//
//   sort(my_arr2.begin(), my_arr2.end());
//
//   for (auto& element : my_arr2)
//	   cout << element << " ";
//   cout << endl;
//
//   //역순 정렬
//   sort(my_arr2.rbegin(), my_arr2.rend());
//
//   return 0;  
//}