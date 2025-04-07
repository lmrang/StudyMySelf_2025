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
	// void pointer �� ������ �Ұ��� �ϴ�.
	// �� ����Ʈ�� �̵��ؾ��ϴ��� ��Ȯ�� �� �� ���� ������.

	cout << &c << " " << ptr << endl;
	// cout�� �⺻������ ���ڿ��� �ν��Ͽ� ����ϱ� ������
	// &c �� �̻��� ���� ������ �ȴ�.

	cout << &f << " " << ptr << endl;
	//cout << *ptr << endl; // � Ÿ������ �� �� ���, �Ұ���.
	cout << *static_cast<float*>(ptr) << endl; // ĳ����

	/*
	�׷����� �ұ��ϰ�, �پ��� Ÿ���� ������ ����� �ڵ忡�� void pointer�� ���Ǳ⵵ �Ѵ�.
	�׷���, �ֽ� c++���� �̷��� ���ص� �Ǵ� �������� ����.
	���Ŀ� ���.
	*/
	return 0;
}