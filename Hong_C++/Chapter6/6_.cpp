#include < iostream>
#include <cstring>

using namespace std;

int main()
{
	char myString[] = "string";	// \0�� �������� ����

	char myString2[255];
	//cin >> myString2;
	cin.getline(myString, 255);		// ������� cin
	//myString2[4] = '\0';
	cout << myString2 << endl;
	// \0 ������ �������� ����Ѵ�.
	// spcae����(32)�� \0(0)���� �ٸ���.
	

	/*
	cout << sizeof(myString) / sizeof(myString[0]) << endl;
	for (int i = 0; i < 7; ++i)
		cout << (int)myString[i] << endl;
	*/

	// cstring
	char source[] = "copy this!";
	char dest[50];
	strcpy_s(dest, 50, source);

	//strcat(), �ڿ� �ٿ��ִ� �Լ�
	strcat(dest, source);

	//strcmp(), ������ 0, �ٸ��� -1 return
	cout << strcmp(source, dest) << endl;
	
	

	return 0;
}