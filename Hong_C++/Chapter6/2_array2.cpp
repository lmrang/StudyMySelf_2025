#include <iostream>

using namespace std;

void doSomething(int students_scores[20])
{
	cout << (int)&students_scores << endl;
	// main과는 다른 주소.
	// 매개변수로 받은 students_scores 배열의 주소가 아니라,
	// 배열의 주소를 담은 다른 저장소의 주소가 출력되기 때문.
	cout << (int)&students_scores[0] << endl;
	// [0]은 main의 [0] 주소와 동일.

	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	cout << sizeof(students_scores) << endl;
	// x86 : 4 , x64 : 8
	// 포인터로 받은것이기 때문에 포인터 사이즈가 출력된 것.
}

int main()
{
	const int num_students = 20;

	int students_scores[num_students] = { 1,2,3,4,5 };

	cout << (int)students_scores << endl;
	// 배열자체가 주소이다.
	cout << (int)&students_scores << endl;
	// 위와 동일한 주소 출력

	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	cout << sizeof(students_scores) << endl;
	//배열의 사이즈 4*20 = 80

	return 0;
}