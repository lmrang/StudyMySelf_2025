#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	//int fibonacci[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };
	vector<int> fibonacci = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	// 가장 큰 숫자 찾기
	int max_number = numeric_limits<int>::lowest();

	for (const auto& n : fibonacci)
		max_number = max(max_number, n);

	cout << max_number << endl;

	// change array values
	// 레퍼런스로 받아야 수정이 가능하다.
	for(auto& number : fibonacci)
		number *= 10;

	//output
	for (const auto number : fibonacci)
		cout << number << " ";
	cout << endl;

	return 0;
}