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

	// 변수선언 ; 반복조건 ; 증감연산자
	for (int count = 0; count < 10; ++count)	// iteration
	{
		cout << count << endl;
	}

	//cout << count << endl; // for문에서 선언한 변수는 for 밖에서는 없어짐.

	//for(int count=0; true;++count) // 무한 루프

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