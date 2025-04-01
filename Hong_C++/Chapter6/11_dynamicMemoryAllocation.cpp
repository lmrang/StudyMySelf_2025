#include <iostream>
using namespace std;

int main()
{
	int* ptr = new (std::nothrow)int{ 7 }; //new에서 발생하는 오류 방지
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
	ptr = nullptr; //오류방지, 기록용

	cout << "After delete" << endl;
	if (ptr != nullptr)
	{
		cout << ptr << endl;	//주소는 그대로
		cout << *ptr << endl;
	}
	
	
	// memory leak
	while (true)
	{
		int* ptr3 = new int;
		cout << ptr << endl;
		
		delete ptr3;
		//new, delete는 조금 느리다.
		// 큰 프로그램일 경우 new, delete를 적게 사용하는것이 좋다.
	}


	return 0;
}