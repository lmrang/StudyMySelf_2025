//������ Enuymerated Types

#include <iostream>
#include <typeinfo>

int computeDamange(int weapon_id)
{
	if (weapon_id == 0) //sword
	{
		return 1;
	}

	if (weapon_id == 1) //hammer
	{
		return 2;
	}
	// 0 : sword
	// 1 : hammer
	// ���� �Ǽ��� �����ϱ� ���Ͽ� �������� ���
}

enum Color			//user-defined data types
{					//���� �빮�ڷ� �ۼ��Ѵ�.
	COLOR_BLACK,	//�����ϴ� ���� ���� ����, �����ϴ� ���ڷκ��� +1
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,	//������ , ���
};					// �����ݷ��� �ʼ�!
					// �ٸ� enum Ŭ�������� ������ ���� ����� �� �ȴ�.

enum Fruit
{
	BANANA,
	APPLE,
};
int main()
{
	using namespace std;

	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	cout << paint << " " << COLOR_BLACK << endl;	// ��� : 0 0

	int color_id = COLOR_RED;
	cout << color_id << endl;  // ��� : 1

	//Color my_color = color_id; // ���� �߻�, �������� ������ ���Ѵ�.
	Color my_color = static_cast<Color>(3); //ĳ������ �����ϴ�.

	//cin >> my_color;		// ���� �Է� �Ұ���.
	


	/* 8_���� ���� ������ (������ Ŭ����), ������ ���� ����
	Color color = COLOR_BLACK;
	Fruit fruit = BANANA;

	if (color == fruit) cout << "Color is fruit?" << endl; // ����� ��. ���� int 0���ν�
	//������ �̷��� �Ǹ� �Ǽ��� ���ɼ��� �������⶧����
	//enum class Fruit ó�� class�� �ٿ��ش�.
	Fruit fruit = Fruit::BANANA; // class�� �޾ƾ��Ѵ�.
	*/
	
	return 0;
}

