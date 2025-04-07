#include <iostream>
using namespace std;

// void pointer, generic pointer

int main()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &f;
	//ptr = &c;


	int* ptr_i = &i;
	cout << ptr_i << endl;
	cout << ptr_i + 1 << endl;
	
	//cout << ptr + i << endl; 
	// void pointer 는 연산이 불가능 하다.
	// 몇 바이트를 이동해야하는지 정확히 알 수 없기 때문에.

	cout << &c << " " << ptr << endl;
	// cout은 기본적으로 문자열로 인식하여 출력하기 때문에
	// &c 는 이상한 값이 나오게 된다.

	cout << &f << " " << ptr << endl;
	//cout << *ptr << endl; // 어떤 타입인지 알 수 없어서, 불가능.
	cout << *static_cast<float*>(ptr) << endl; // 캐스팅

	/*
	그럼에도 불구하고, 다양한 타입의 변수를 사용한 코드에는 void pointer가 사용되기도 한다.
	그러나, 최신 c++에는 이렇게 안해도 되는 문법들이 생김.
	추후에 계속.
	*/
	return 0;
}