#include <iostream>

using namespace std;

int main()
{
	unsigned int count = 10;

	while (count >= 10)
	{
		if (count == 0) cout << "zero";
		else cout << count << " ";

		count--;
		//무한히 출력됨
		//이유 : unsigned으로 인한 오버플로우
		//증가하는 경우에는 괜찮음. (음수에서 발생한 문제)
		//unsigned가 최적화 경우에 속도에 좋다는 장점이 있음.
		//각각의 장,단점이 존재한다.
	}

	//int count = 0;

	//while (1) // count < 10
	//{

	//	cout << count << endl;
	//	count++;

	//	if (count == 10) break;
	//}

	return 0;
}

int do_while()
{
	int selection;
	do
	{
		cout << "1. add" << endl;
		cout << "2. sub" << endl;
		cout << "3. mult" << endl;
		cout << "4. div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	cout << "You selected" << selection << endl;

	return 0;
}