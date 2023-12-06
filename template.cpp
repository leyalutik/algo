#include<iostream>
#include<vector>
#include<string>


void sort(std::vector<int>& v)
{

}



int main()
{
	std::vector<int> v = {4,3,6,2,4,7,1,3,4,1,2,3,4};
	for(auto i:v)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;

	sort(v);

	for(auto i:v)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}
