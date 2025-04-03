#include <iostream>
using namespace std;

int main()
{
	//1.
	const int value = 5;
	const int* ptr = &value;
	//*ptr = 6;	// value = 6 ºÒ°¡´É : const int value

	//2.
	int value2 = 5;
	const int* ptr2 = &value2;
	//*ptr = 6;
	value2 = 6;

	//3.
	int value3 = 5;
	const int* ptr3 = &value3;
	// 
	int value4 = 6;
	ptr3 = &value4;

	//4.
	int value5 = 5;
	int* const ptr5 = &value5;
	*ptr5 = 10;
	cout << *ptr5 << endl;

	int value6 = 8;
	ptr5 = &value6;	// ¾ÈµÊ.

	//5.
	int value7 = 5;
	const int* const ptr7 = &value7;

	return 0;
}