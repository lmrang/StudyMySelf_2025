#include <iostream>
using namespace std;

int main()
{
	int length;

	cin >> length;

	//int array[length]
	int* array = new int[length] {11,22,33,44,55,66};
	// 6개보다 적게 입력 시 에러. 이미 할당된 메모리.

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; i++)
	{
		cout << (uintptr_t) & array[i] << endl;
		cout << array[i] << endl;
	}

	delete[] array;

	int fixedArray[] = { 1,2,3,4,5 };

	int* array = new int[5]{ 1,2,3,4,5 };

	// resizing

	delete[] array;

	return 0;
}