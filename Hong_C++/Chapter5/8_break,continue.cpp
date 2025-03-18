#include <iostream>
using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')	// Hello 출력
			break;

		if (ch == 'r')	// Hello 미출력
			return;
	}

	cout << "Hello" << endl;
}

void whatIsContinue()
{
	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
		{
			if (i % 2 == 0) continue;
			cout << i << endl;
		}
	}
	// 2의 배수는 출력되지 않음.
}

void doWhileWithcontinue()
{
	int count(0);

	do
	{
		if (count == 5)
			continue;

		cout << count << endl;

		count++; //만일 증감연산자가 while에 없고, 이 위치에만 있다면,
				 //무한 루프에 걸리게 된다. (주의)
	} while (++count < 10);
}

void breakExample()
{
	int count(0);
	//bool escape_flag = false;

	while (true)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
			break;
	}
}

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		cout << i << endl;
		if (i == 5) break;
	}

	return 0;
}