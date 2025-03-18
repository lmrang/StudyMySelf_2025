#include <iostream>
#include <cstdlib>	// std::radn(), std::srand()
#include <ctime> // std::time()
#include <random>
using namespace std;

unsigned int PRNG()	// Pseudo Random Number Generator
{
	static unsigned int seed = 5523; // seed number

	seed = 8253729 * seed + 2396403;

	return seed % 32768;
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main()
{
	//std::srand(5323);	// seed �����ϸ� ���ڰ� ����.
	std::srand(static_cast<unsigned int>(std::time(0)));
	// �ð��� �����Ͽ� seed number�� ��� �ٲ�� ����

	for (int count = 1; count <= 100; ++count)
	{
		cout << std::rand() << "\t";

		if (count % 5 == 0) cout << endl;
	}

	//Ư�� ���� �������� ���� ����
	cout << getRandomNumber(5, 8) << "\t";	// 5~8
	cout << rand() % 4 + 5 << "\t";			// 5~8

	// #include <random> ���
	std::random_device rd;	// 1. ��������̽� ����
	std::mt19937 mersenne(rd()); //  2. create a mesenne twister, ������ 
	std::uniform_int_distribution<> dice(1, 6);	// 3. 1~6 ���� Ȯ���� �����ϰ� (������ ���� ����)

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;


	return 0;
}