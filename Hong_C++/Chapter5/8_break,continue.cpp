#include <iostream>
using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')	// Hello ���
			break;

		if (ch == 'r')	// Hello �����
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
	// 2�� ����� ��µ��� ����.
}

void doWhileWithcontinue()
{
	int count(0);

	do
	{
		if (count == 5)
			continue;

		cout << count << endl;

		count++; //���� ���������ڰ� while�� ����, �� ��ġ���� �ִٸ�,
				 //���� ������ �ɸ��� �ȴ�. (����)
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