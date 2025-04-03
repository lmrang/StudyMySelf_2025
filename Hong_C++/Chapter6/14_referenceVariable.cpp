#include <iostream>
using namespace std;

void doSomething(const int& n)
{
	cout << &n << endl;
	//n = 10;// const를 붙이는 순간 변경이 불가능하다.
	cout << "In doSomething" << n << endl;
}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main()
{
	int value = 5;
	int* ptr = nullptr;
	ptr = &value;
	int& ref = value;

	cout << ref << endl;

	ref = 10;

	cout << value << " " << ref << endl;

	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl;
	////////////////////////////////////////
	int x = 5;
	int& ref = x; // 반드시 초기화(변수)를 해줘야한다.

	const int y = 8;
	const int& ref = y;
	////////////////////////////////////////
	int value1 = 5;
	int value2 = 10;
	int& ref1 = value1;

	cout << ref1 << endl;

	ref1 = value2;

	cout << ref1 << endl;
	///////////////////////////////////////
	int n = 5;

	cout << n << endl;
	cout << &n << endl;

	doSomething(n);

	cout << n << endl;
	///////////////////////////////////////
	//활용법
	Other ot;

	int& v1 = ot.st.v1;
	v1 = 1;
	///////////////////////////////////////
	int value = 5;
	int* const ptr = &value;
	int& ref = value;

	*ptr = 10;
	ref = 10;
	//동일


	return 0;
}