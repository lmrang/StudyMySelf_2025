#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
	for (int index = 0; index < length; index++)
		cout << array[index] << endl;
	cout << endl;
}

int main()
{
	const int length = 5;
	
	int array[length] = { 3,5,2,1,4 };

	for (int i = 0; i < length - 1; i++)
	{
		int minIndex = i;

		for (int j = i + 1; j < length; j++)
		{
			if (array[minIndex] > array[j])
			{
				minIndex = j;
			}
		}
		//std::swap(array[minIndex], array[i]) 으로도 사용가능
		int temp = array[minIndex];
		array[minIndex] = array[i];
		array[i] = temp;

		printArray(array, length);
	}
	return 0;
}