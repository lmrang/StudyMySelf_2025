#include <iostream>

using namespace std;

// void printArray (int *array) ����
void printArray(int array[])
{
	cout << sizeof(array) << endl;	// 4
	cout << *array << endl;

	*array = 100;
}

int main()
{
	int array[5] = { 9,7,5,3,1 };

	cout << array << endl;	// �ּҰ� ���
	cout << &array[0] << endl;	// ���� �ּҿ� ����
	cout << *array << endl; // 9�� ���

	int* ptr = array;
	cout << ptr << endl;
	cout << *ptr << endl;

	char name[] = "jackjack";
	cout << *name << endl;

	cout << sizeof(array) << endl;	// 4*5 = 20
	cout << sizeof(ptr) << endl;	// �ּһ����� 4

	printArray(array);	// �ּһ����� 4 ���
	// ���������δ� ������ó��

	cout << array[0] << " " << *array << endl;

	cout << *ptr << " " << *(ptr + 1) << endl;

	return 0;
}
// struct�� *�� �޾Ƶ� ���� ��ȯ���� ����.