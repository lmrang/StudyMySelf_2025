#include <iostream>
#include <string>

using namespace std;

struct Person
{
	double height;
	float weight;
	int age;
	string name;

	//double height = 3.0; ���� �ʱ�ȭ ����
	//�ʱ�ȭ�� ���� �ʴ´ٸ� ���� �ʱ�ȭ�� �⺻���� �־��ִ� ����

	void print()
	{
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};

struct Family
{
	Person me, mom, dad;
	//����ü �ȿ� ����ü ����
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
	//���� ����� ������ ���ŷӴ�.
	//uniform initialization ��õ
	Person mom{2.0, 100.0, 20, "Jack"};

	printPerson(mom);	//�Լ�
	mom.print();		//����ü�� �Լ�

	Person me2(me);
	me2.print();
	// me2 = me : �ܼ��� ��쿡�� ����

	Person me_from_func = getMe();	//����ü�� �Լ��μ� return ���� ���� �ִ�.

	return 0;
}