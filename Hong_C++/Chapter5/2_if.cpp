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

	cout << x << endl; // 출력 : 입력된 x값

	if (x > 10)
		cout << x << " is greater than 10" << endl;
	else if (x < 10)
		cout << x << " is less than 10" << endl;
	else // if (x == 10)
		cout << x << " is exactly 10" << endl;

	if (x > 10)	
		; // null statment

	if (x = 0)
		cout << x << endl;	// x=0; if(x) 이런 형태로 받아들임. 즉, 출력 없음.
	cout << x << endl;	// 입력된 x 값 출력

	return 0;
}