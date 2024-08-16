#include<iostream>
#include<vector>
#include<string>
#include<exception>
#include<sstream>


void sort(std::vector<int>& v)
{
}

void display(const std::vector<int>& v)
{
	for(auto i:v)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

int main()

{
try
{
	std::vector<int> v = {4,3,6,2,4,7,1,3,4,1,2,3,4};
	
	int i;
	char ch;
	std::string s;
	for( i=0 , ch=0; std::cin >> ch, i<10; ++i)
	{
		s.push_back(ch);
		
	}
	std::stringstream ss(s);
	std::cout << ss.str();

	display(v);

	sort(v);

	display(v);
}
catch(std::exception& e)
{
	std::cout << "mistake\n";
}
	
	return 0;
}
