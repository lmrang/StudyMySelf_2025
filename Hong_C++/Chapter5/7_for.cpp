#include <iostream>

int pow(int base, int exponent)
{
	int result = 1;

	for (int count = 0; count < exponent; ++count)
		result *= base;

	return result;
}

int main()
{
	using namespace std;

	// �������� ; �ݺ����� ; ����������
	for (int count = 0; count < 10; ++count)	// iteration
	{
		cout << count << endl;
	}

	//cout << count << endl; // for������ ������ ������ for �ۿ����� ������.

	//for(int count=0; true;++count) // ���� ����

	for (int count = 9; count >= 0; count -= 2)
	{
		cout << count << endl;
	}

	for (int i = 0, j = 0; i < 10; ++i, --j)
	{
		cout << i << " " << j << endl;
	}

	return 0;
}