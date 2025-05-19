//#include <iostream>
//#include <bitset> //이진수 변환을 위한 헤더파일
//
//
//using namespace std;
//
//int main()
//{
//	const unsigned int red_mask = 0xFF0000;
//	const unsigned int green_mask = 0x00FF00;
//	const unsigned int blue_mask = 0x0000FF;
//	
//	cout << "Red Mask : " << bitset<24>(red_mask) << endl;
//	cout << "Green Mask : " << bitset<24>(green_mask) << endl;
//	cout << "Blue Mask : " << bitset<24>(blue_mask) << endl;
//
//	unsigned int pixel_color = 0xDAA520;
//
//	cout << "pixel_color : " << bitset<24>(pixel_color) << endl; //1101 1010 1010 0101 0010 0000 (0xDAA520)
//
//	unsigned char blue = pixel_color & blue_mask;
//	
//	cout << "blue : " << bitset<8>(blue) << " " << int (blue) <<  endl; //0000 0000 0000 0000 0000 0100 (0x000004)
//
//	unsigned char green = (pixel_color & green_mask) >> 8;
//
//	cout << "green : " << bitset<8>(green) << " " << int(green) << endl; //0000 0000 0000 0000 0101 0010 (0x000052)
//
//	unsigned char red = (pixel_color & red_mask) >> 16;
//
//	cout << "red : " << bitset<8>(red) << " " << int(red) << endl; //0000 0000 1101 1010 0000 0000 (0x00DA)
//
//
//	return 0;
//}