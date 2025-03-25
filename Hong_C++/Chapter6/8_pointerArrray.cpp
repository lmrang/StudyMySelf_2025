#include <iostream>

using namespace std;

// void printArray (int *array) 동일
void printArray(int array[])
{
	cout << sizeof(array) << endl;	// 4
	cout << *array << endl;

	*array = 100;
}

int main()
{
	int array[5] = { 9,7,5,3,1 };

	cout << array << endl;	// 주소가 출력
	cout << &array[0] << endl;	// 위의 주소와 동일
	cout << *array << endl; // 9가 출력

	int* ptr = array;
	cout << ptr << endl;
	cout << *ptr << endl;

	char name[] = "jackjack";
	cout << *name << endl;

	cout << sizeof(array) << endl;	// 4*5 = 20
	cout << sizeof(ptr) << endl;	// 주소사이즈 4

	printArray(array);	// 주소사이즈 4 출력
	// 내부적으로는 포인터처럼

	cout << array[0] << " " << *array << endl;

	cout << *ptr << " " << *(ptr + 1) << endl;

	return 0;
}
// struct를 *로 받아도 강제 변환되지 않음.