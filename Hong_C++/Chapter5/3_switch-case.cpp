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
	//위의 방법으로 하면 실수의 확률 증가

	//간단하게 switch문으로 작성가능
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
		int b = 5;	//(오류) 선언은 가능하나, 대입은 안됨.

	case 0 :
		int y = 3;	// switch
		cout << a << endl;
		break;

	case 1:
		// y = 5; // case 0 에서의 y에 5를 대입한 것과 동일
		cout << y << endl;	//만약 바로 case 0의 y값을 출력하면 쓰레기값이 나옴
		break;
	// switch문 내에서의 변수 선언과 사용은 최소화 하는 것이 좋습니다.

	default :
		cout << "Undefined input" << endl;
		break; // 없어도 됨.
	}

	return 0;
}