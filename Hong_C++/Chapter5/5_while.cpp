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
		//������ ��µ�
		//���� : unsigned���� ���� �����÷ο�
		//�����ϴ� ��쿡�� ������. (�������� �߻��� ����)
		//unsigned�� ����ȭ ��쿡 �ӵ��� ���ٴ� ������ ����.
		//������ ��,������ �����Ѵ�.
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