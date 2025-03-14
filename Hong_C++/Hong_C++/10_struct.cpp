#include <iostream>
#include <string>

using namespace std;

struct Person
{
	double height;
	float weight;
	int age;
	string name;

	//double height = 3.0; 직접 초기화 가능
	//초기화를 하지 않는다면 직접 초기화된 기본값을 넣어주는 역할

	void print()
	{
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};

struct Family
{
	Person me, mom, dad;
	//구조체 안에 구조체 가능
};

Person getMe()
{
	Person me3{ 2.0, 100.0, 20, "Jack" };
}

void printPerson(Person ps)
{
	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
	cout << endl;
	//member selction operator "."
}

struct Employee
{
	short id;	// 2bytes
	int age;	// 4bytes
	double wage;// 8bytes
	// 2+4+8 = 14 ??
	// sizeof(Employee) : 16 ??
	// 2bytes (+2bytes) -> 4bytes : padding
};

int main()
{
	Person me;
	me.age = 20;
	me.name = "Jack";
	me.height = 2.0;
	me.weight = 100;
	//위의 방식은 굉장히 번거롭다.
	//uniform initialization 추천
	Person mom{2.0, 100.0, 20, "Jack"};

	printPerson(mom);	//함수
	mom.print();		//구조체의 함수

	Person me2(me);
	me2.print();
	// me2 = me : 단순한 경우에만 가능

	Person me_from_func = getMe();	//구조체를 함수로서 return 받을 수도 있다.

	return 0;
}