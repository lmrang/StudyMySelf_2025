#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//array<int, 5> my_arr; array는 사이즈를 반드시 적어줘야한다는 단점이 있음.
	std::vector<int> array;

	vector<int>array2 = { 1,2,3,4,5 };
	cout << array2.size() << endl;

	vector<int>array3 = { 1,2,3 };
	cout << array3.size() << endl;

	vector<int>array4 { 1,2,3 };	//uniform init
	cout << array4.size() << endl;

	vector<int> arr = { 1,2,3,4,5 };
	arr.resize(10);	//1 2 3 4 5 0 0 0 0 0
	// 사이즈를 줄이면 반대로 그 뒤의 숫자는 다 없어짐.

	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	return 0;
}