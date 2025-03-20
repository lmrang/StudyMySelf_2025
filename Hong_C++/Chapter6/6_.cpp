#include < iostream>
#include <cstring>

using namespace std;

int main()
{
	char myString[] = "string";	// \0이 마지막에 존재

	char myString2[255];
	//cin >> myString2;
	cin.getline(myString, 255);		// 공백까지 cin
	//myString2[4] = '\0';
	cout << myString2 << endl;
	// \0 나오기 전까지만 출력한다.
	// spcae공백(32)과 \0(0)과는 다르다.
	

	/*
	cout << sizeof(myString) / sizeof(myString[0]) << endl;
	for (int i = 0; i < 7; ++i)
		cout << (int)myString[i] << endl;
	*/

	// cstring
	char source[] = "copy this!";
	char dest[50];
	strcpy_s(dest, 50, source);

	//strcat(), 뒤에 붙여주는 함수
	strcat(dest, source);

	//strcmp(), 같으면 0, 다르면 -1 return
	cout << strcmp(source, dest) << endl;
	
	

	return 0;
}