#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;

	if (x > 10) cout << x << " is greater than 10" << endl;
	else cout << x << " is not greater than 10" << endl;

	if (1)
		int x = 5;
	else
		int x = 6;

	cout << x << endl; // ��� : �Էµ� x��

	if (x > 10)
		cout << x << " is greater than 10" << endl;
	else if (x < 10)
		cout << x << " is less than 10" << endl;
	else // if (x == 10)
		cout << x << " is exactly 10" << endl;

	if (x > 10)	
		; // null statment

	if (x = 0)
		cout << x << endl;	// x=0; if(x) �̷� ���·� �޾Ƶ���. ��, ��� ����.
	cout << x << endl;	// �Էµ� x �� ���

	return 0;
}