#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//array<int, 5> my_arr; array�� ����� �ݵ�� ��������Ѵٴ� ������ ����.
	std::vector<int> array;

	vector<int>array2 = { 1,2,3,4,5 };
	cout << array2.size() << endl;

	vector<int>array3 = { 1,2,3 };
	cout << array3.size() << endl;

	vector<int>array4 { 1,2,3 };	//uniform init
	cout << array4.size() << endl;

	vector<int> arr = { 1,2,3,4,5 };
	arr.resize(10);	//1 2 3 4 5 0 0 0 0 0
	// ����� ���̸� �ݴ�� �� ���� ���ڴ� �� ������.

	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	return 0;
}