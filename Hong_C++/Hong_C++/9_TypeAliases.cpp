#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	typedef double distance_t;
	
	double	   my_distance;
	distance_t home2work;
	distance_t home2school;

	// 가독성이 떨어짐
	std::vector<std::pair<std::string, int> > pairlist1;
	std::vector<std::pair<std::string, int> > pairlist2;

	// 가독성 증가
	typedef std::vector<std::pair<std::string, int> > pairlist_t;
	pairlist_t pairlist3;

	// 컴파일러에게만 알려주는 것. alises와는 작동방법이 다름. 결과는 동일.
	using pairlist_t = std::vector<std::pair<std::string, int> >;

	return 0;
}