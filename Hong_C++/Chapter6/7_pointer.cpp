#include <iostream>
#include <typeinfo>
using namespace std;

struct Something
{
	int a, b, c, d;
};

int main()
{
	int x = 5;
	double d = 1.0;

	cout << x << endl;
	cout << &x << endl; // & : address-of operator
	cout << (int)&x << endl;

	//de-reference operator (*)
	// 포인터가 "저쪽 주소에 가면 이 데이터가 있어요"라고
	// 간접적으로 가리키기만 하는 것에 대해서,
	// "그럼 거기에 진짜 뭐가 있는지 내가 들여다볼게" 라며
	// 직접적으로 접근하겠다는 의미입니다.
	cout << *(&x) << endl;


	int* ptr_x = &x;
	double 	*ptr_d = &d;
	
	cout << ptr_x << endl;	// 주소
	cout << *ptr_x << endl;	// x값

	cout << ptr_d << endl;	// 주소
	cout << *ptr_d << endl;	// d값


	cout << typeid(ptr_x).name() << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
	// x86 : 주소 사이즈 4 , x64 : 주소 사이즈 8
		 

	Something ss;
	Something* ptr_s;

	cout << sizeof(Something) << endl;	// 4*4 = 16
	cout << sizeof(ptr_s) << endl;		// 주소사이즈 4

	return 0;
}