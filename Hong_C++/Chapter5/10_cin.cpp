#include <iostream>
using namespace std;

int getInt()
{	
	while (true)
	{
		cout << "Enter an integer number : ";
		int x;
		cin >> x;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			cout << "Invalid number, please try again" << endl;
		}
		else
		{
			//여러개 입력하게 되면? 버퍼에 남아있는 숫자를 무시하게,
			std::cin.ignore(32767, '\n'); // 32767은 적당히 큰 숫자임

			return x;
		}
	}
}

char getOperator()
{
	while (true)
	{
		cout << "Enter an operator (+, -) : "; // TODO : more operators *, / etc.
		char op;
		cin >> op;
		std::cin.ignore(32767, '\n');

		if (op == '+' || op == '-')
			return op;
		else
			cout << "Invaild operator, please try again" << endl;
	}

}

void printResult(int x, char op, int y)
{
	if (op == '+') cout << x + y << endl;
	else if (op = '-') cout << x - y << endl;
	else
	{
		cout << "Invalid operator" << endl;
	}
}

int main()
{
	int x = getInt();
	char op = getOperator();
	int y = getInt();

	printResult(x, op, y);

	return 0;
}