#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void printLength(const array<int, 5>& my_arr)
{// &레퍼런스 사용시, 복사가 일어나지 않음.
	cout << my_arr.size() << endl;
}

int main()
{
	array<int, 5> my_arr = { 1,21,3,40,5 };
	//my_arr = { 0,1,2,3,4 };
	//my_arr = { 0,1,2 };

	cout << my_arr[10] << endl;
	cout << my_arr.at(10) << endl;
	// at은 크기를 넘는지 안 넘는지 확인 후 예외처리하는 가능, 다만 속도부분에서는 상대적으로 느림

	cout << my_arr.size() << endl;

	printLength(my_arr);

	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;

	// 정렬
	sort(my_arr.begin(), my_arr.end());
	// 역순 정렬 sort(my_arr.rbegin(), my_arr.rend());

	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	return 0;
}