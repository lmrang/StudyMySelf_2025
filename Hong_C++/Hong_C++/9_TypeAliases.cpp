#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
	typedef double distance_t;
	
	double	   my_distance;
	distance_t home2work;
	distance_t home2school;

	// �������� ������
	std::vector<std::pair<std::string, int> > pairlist1;
	std::vector<std::pair<std::string, int> > pairlist2;

	// ������ ����
	typedef std::vector<std::pair<std::string, int> > pairlist_t;
	pairlist_t pairlist3;

	// �����Ϸ����Ը� �˷��ִ� ��. alises�ʹ� �۵������ �ٸ�. ����� ����.
	using pairlist_t = std::vector<std::pair<std::string, int> >;

	return 0;
}