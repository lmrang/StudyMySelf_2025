#include <iostream>
using namespace std;

void doSomething(const int& x)
{
	/*
	* ���۷����� �޴� ���,
	* �Լ� ���ο��� x�� ���� ���簡 �Ͼ�� �ʾ�
	* �ӵ� ���鿡�� ������ ����.
	* ���� const�� �Լ� ���ο��� �Ǽ��� x�� ���� ���� �� �ϰ� ����.
	*/ 
	cout << x << endl;
}

int main()
{
	const int x = 5;
	const int &ref_x = x;

	const int& ref_2 = ref_x;


	const int& ref_3 = 3 + 4; // ����

	doSomething(1);


	return 0;
}