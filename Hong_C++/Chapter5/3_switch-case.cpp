#include <iostream>

using namespace std;

enum class Colors		
{					
	BLACK,
	WHITE,
	RED,
	BLUE,
	GREEN,
};

void printColorName(Colors color)
{
	if (color == Colors::BLACK)
		cout << "Black" << endl;
	if (color == Colors::WHITE)
		cout << "White" << endl;
	if (color == Colors::RED)
		cout << "Red" << endl;
	//���� ������� �ϸ� �Ǽ��� Ȯ�� ����

	//�����ϰ� switch������ �ۼ�����
	switch (static_cast<int>(color))
	{
	case 0 :
		cout << "Black";
		break;
	case 1 :
		cout << "White";
		break;
	}
}



int main()
{
	int x;
	cin >> x;

	switch (x)
	{
		int a;
		int b = 5;	//(����) ������ �����ϳ�, ������ �ȵ�.

	case 0 :
		int y = 3;	// switch
		cout << a << endl;
		break;

	case 1:
		// y = 5; // case 0 ������ y�� 5�� ������ �Ͱ� ����
		cout << y << endl;	//���� �ٷ� case 0�� y���� ����ϸ� �����Ⱚ�� ����
		break;
	// switch�� �������� ���� ����� ����� �ּ�ȭ �ϴ� ���� �����ϴ�.

	default :
		cout << "Undefined input" << endl;
		break; // ��� ��.
	}

	return 0;
}