#include <iostream>
using namespace std;

int main()
{
	int* ptr = new (std::nothrow)int{ 7 }; //new���� �߻��ϴ� ���� ����
	int* ptr2 = ptr;

	if(ptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	else
	{
		cout << "Coulde not allocate memory" << endl;
	}
	
	delete ptr;
	ptr = nullptr; //��������, ��Ͽ�

	cout << "After delete" << endl;
	if (ptr != nullptr)
	{
		cout << ptr << endl;	//�ּҴ� �״��
		cout << *ptr << endl;
	}
	
	
	// memory leak
	while (true)
	{
		int* ptr3 = new int;
		cout << ptr << endl;
		
		delete ptr3;
		//new, delete�� ���� ������.
		// ū ���α׷��� ��� new, delete�� ���� ����ϴ°��� ����.
	}


	return 0;
}