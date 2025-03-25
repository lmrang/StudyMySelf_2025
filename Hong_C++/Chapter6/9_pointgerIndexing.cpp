#include <iostream>
using namespace std;

int main()
{
	int value = 7;
	int* ptr = &value;

	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr + 2) << endl;

	int array[] = { 9,7,5,3,1 };
	int* ptr2 = array;

	for(int i = 0; i<5 ; i++)
	{ 
		//cout << array[i] << " " << (uintptr_t) & array[i] << endl;
		cout << *(ptr2 +i) << " " << (uintptr_t)(ptr2+i) << endl;
	}

	char name[] = "jackjack";

	const int n_name = sizeof(name) / sizeof(char);

	char* ptr3 = name;

	for (int i = 0; i < n_name; i++)
	{
		//cout << (name + i) << endl;
		cout << *(ptr3 + i);
	}

	return 0;
}