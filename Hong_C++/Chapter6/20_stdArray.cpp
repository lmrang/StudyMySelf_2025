#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void printLength(const array<int, 5>& my_arr)
{// &���۷��� ����, ���簡 �Ͼ�� ����.
	cout << my_arr.size() << endl;
}

int main()
{
	array<int, 5> my_arr = { 1,21,3,40,5 };
	//my_arr = { 0,1,2,3,4 };
	//my_arr = { 0,1,2 };

	cout << my_arr[10] << endl;
	cout << my_arr.at(10) << endl;
	// at�� ũ�⸦ �Ѵ��� �� �Ѵ��� Ȯ�� �� ����ó���ϴ� ����, �ٸ� �ӵ��κп����� ��������� ����

	cout << my_arr.size() << endl;

	printLength(my_arr);

	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;

	// ����
	sort(my_arr.begin(), my_arr.end());
	// ���� ���� sort(my_arr.rbegin(), my_arr.rend());

	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	return 0;
}