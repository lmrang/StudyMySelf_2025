#include <iostream>
using namespace std;

const char* getName()
{
	return "Jack Jack";
}

int main()
{
	char name[] = "Jack Jack";
	//char* name = "Jack Jack";  �Ұ���
	const char* name = "Jack Jack"; //����
	const char* name2 = "Jack Jack";

	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;
	// �ּҰ� ����


	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World";
	const char* name = "Jack Jack";

	cout << int_arr << endl;	// �ּҰ� ���
	cout << char_arr << endl;	// ���ڰ� ���
	cout << name << endl;		// ���ڰ� ���


	char c = 'Q';
	cout << &c << endl;
	//Q ���� �̻��� �� ��� (null ���ö����� ���, ���� ����, ���輺 ����)
	cout << *&c << endl;


	return 0;
}
