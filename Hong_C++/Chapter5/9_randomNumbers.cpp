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
	//std::srand(5323);	// seed 설정하면 숫자가 동일.
	std::srand(static_cast<unsigned int>(std::time(0)));
	// 시간과 연동하여 seed number가 계속 바뀌게 유도

	for (int count = 1; count <= 100; ++count)
	{
		cout << std::rand() << "\t";

		if (count % 5 == 0) cout << endl;
	}

	//특정 범위 내에서의 랜덤 숫자
	cout << getRandomNumber(5, 8) << "\t";	// 5~8
	cout << rand() % 4 + 5 << "\t";			// 5~8

	// #include <random> 사용
	std::random_device rd;	// 1. 랜덤디바이스 생성
	std::mt19937 mersenne(rd()); //  2. create a mesenne twister, 생성기 
	std::uniform_int_distribution<> dice(1, 6);	// 3. 1~6 나올 확률이 동일하게 (생성기 분포 설정)

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;


	return 0;
}