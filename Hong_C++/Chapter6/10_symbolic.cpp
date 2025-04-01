#include <iostream>
using namespace std;

const char* getName()
{
	return "Jack Jack";
}

int main()
{
	char name[] = "Jack Jack";
	//char* name = "Jack Jack";  불가능
	const char* name = "Jack Jack"; //가능
	const char* name2 = "Jack Jack";

	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;
	// 주소가 동일


	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World";
	const char* name = "Jack Jack";

	cout << int_arr << endl;	// 주소가 출력
	cout << char_arr << endl;	// 문자가 출력
	cout << name << endl;		// 문자가 출력


	char c = 'Q';
	cout << &c << endl;
	//Q 이후 이상한 값 출력 (null 나올때까지 출력, 완전 랜덤, 위험성 높음)
	cout << *&c << endl;


	return 0;
}
