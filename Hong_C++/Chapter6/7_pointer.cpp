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
	// �����Ͱ� "���� �ּҿ� ���� �� �����Ͱ� �־��"���
	// ���������� ����Ű�⸸ �ϴ� �Ϳ� ���ؼ�,
	// "�׷� �ű⿡ ��¥ ���� �ִ��� ���� �鿩�ٺ���" ���
	// ���������� �����ϰڴٴ� �ǹ��Դϴ�.
	cout << *(&x) << endl;


	int* ptr_x = &x;
	double 	*ptr_d = &d;
	
	cout << ptr_x << endl;	// �ּ�
	cout << *ptr_x << endl;	// x��

	cout << ptr_d << endl;	// �ּ�
	cout << *ptr_d << endl;	// d��


	cout << typeid(ptr_x).name() << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
	cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
	// x86 : �ּ� ������ 4 , x64 : �ּ� ������ 8
		 

	Something ss;
	Something* ptr_s;

	cout << sizeof(Something) << endl;	// 4*4 = 16
	cout << sizeof(ptr_s) << endl;		// �ּһ����� 4

	return 0;
}