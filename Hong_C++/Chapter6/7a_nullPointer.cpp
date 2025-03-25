#include <iostream>
#include <cstddef>
using namespace std;

void doSomething(double *ptr)
{
	cout << "address of pointer varaible in main()" << &ptr << endl;
	if (ptr != nullptr)
	{
		// do something useful
		cout << *ptr << endl;
	}
	else
	{
		// do nothing with ptr
		cout << "Null ptr, do nothing" << endl;
	}
}

int main()
{
	double* ptr = 0; // c-style
	double* ptr2 = NULL; // modern c++
	double* ptr3 = nullptr;

	doSomething(ptr3);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);

	ptr = &d;

	doSomething(ptr);

	std::nullptr_t nptr;	//nullptr 만 넣을수 있는.

	cout << "address of pointer varaible in main()" << &ptr << endl;

	return 0;
}