#include <iostream>
using namespace std;

struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	JACKJACK,
	DASH,
	VIOLET,
	NUM_STUDENTS,
};

int main()
{
	int one_student_score;	// 1 varidable
	int student_scores[5];	// 5 int

	cout << sizeof(one_student_score) << endl;		// 4
	cout << sizeof(student_scores) << endl;			// 20

	one_student_score = 100;

	student_scores[0] = 100; // 1st element
	student_scores[1] = 80;	 // 2nd element
	student_scores[2] = 90;	 // 3rd element
	student_scores[3] = 50;	 // 4th element
	student_scores[4] = 0;	 // 5th element
	//student_scores[5] = 0;   // 6th element 불가능

	cout << sizeof(Rectangle) << endl; // 8
	Rectangle rect_arr[10];
	cout << sizeof(rect_arr) << endl; // 80


	int my_array[5] = {1,2,3,4, };
	int my_array2[5]{ 1,2,3,4, };

	int students_scores[NUM_STUDENTS];
	students_scores[JACKJACK] = 100;

	int num_students = 0;
	cin >> num_students;
	int students_scores2[num_students];
	// cin으로 입력받아 범위를 정하는 것은 불가능(런타임)
	// 컴파일 타임에 반드시 사이즈가 정해져야 한다.

	return 0;
}