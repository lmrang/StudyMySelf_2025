//열거형 Enuymerated Types

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
	// 위의 실수를 방지하기 위하여 열거형을 사용
}

enum Color			//user-defined data types
{					//보통 대문자로 작성한다.
	COLOR_BLACK,	//시작하는 숫자 지정 가능, 시작하는 숫자로부터 +1
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,	//마지막 , 허용
};					// 세미콜론은 필수!
					// 다른 enum 클래스여도 동일한 변수 사용은 안 된다.

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

	cout << paint << " " << COLOR_BLACK << endl;	// 출력 : 0 0

	int color_id = COLOR_RED;
	cout << color_id << endl;  // 출력 : 1

	//Color my_color = color_id; // 오류 발생, 정수형을 넣지는 못한다.
	Color my_color = static_cast<Color>(3); //캐스팅은 가능하다.

	//cin >> my_color;		// 직접 입력 불가능.
	


	/* 8_영역 제한 열거형 (열거형 클래스), 열거형 단점 보완
	Color color = COLOR_BLACK;
	Fruit fruit = BANANA;

	if (color == fruit) cout << "Color is fruit?" << endl; // 출력이 됨. 같은 int 0으로써
	//하지만 이렇게 되면 실수할 가능성이 높아지기때문에
	//enum class Fruit 처럼 class를 붙여준다.
	Fruit fruit = Fruit::BANANA; // class를 받아야한다.
	*/
	
	return 0;
}

