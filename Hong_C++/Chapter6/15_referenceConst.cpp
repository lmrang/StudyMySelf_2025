#include <iostream>
using namespace std;

void doSomething(const int& x)
{
	/*
	* 레퍼런스로 받는 경우,
	* 함수 내부에서 x에 대한 복사가 일어나지 않아
	* 속도 측면에서 이점이 있음.
	* 또한 const로 함수 내부에서 실수로 x의 값을 수정 못 하게 방지.
	*/ 
	cout << x << endl;
}

int main()
{
	const int x = 5;
	const int &ref_x = x;

	const int& ref_2 = ref_x;


	const int& ref_3 = 3 + 4; // 가능

	doSomething(1);


	return 0;
}