#include <iostream>

using namespace std;

void doSomething(int students_scores[20])
{
	cout << (int)&students_scores << endl;
	// main���� �ٸ� �ּ�.
	// �Ű������� ���� students_scores �迭�� �ּҰ� �ƴ϶�,
	// �迭�� �ּҸ� ���� �ٸ� ������� �ּҰ� ��µǱ� ����.
	cout << (int)&students_scores[0] << endl;
	// [0]�� main�� [0] �ּҿ� ����.

	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	cout << sizeof(students_scores) << endl;
	// x86 : 4 , x64 : 8
	// �����ͷ� �������̱� ������ ������ ����� ��µ� ��.
}

int main()
{
	const int num_students = 20;

	int students_scores[num_students] = { 1,2,3,4,5 };

	cout << (int)students_scores << endl;
	// �迭��ü�� �ּ��̴�.
	cout << (int)&students_scores << endl;
	// ���� ������ �ּ� ���

	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;

	cout << sizeof(students_scores) << endl;
	//�迭�� ������ 4*20 = 80

	return 0;
}