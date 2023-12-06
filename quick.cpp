#include<iostream>
#include<vector>
#include<string>



void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int partition(std::vector<int>& v, const int l0,const int  ln)
{
	int p = v[ln];
	int i0 = l0;

	for(int i=l0; i<ln; ++i)
	{
		if(v[i] < p)
		{
			swap(v[i0],v[i]);
			++i0;
		}
	}
	swap(v[i0], v[ln]);

	return i0;
}

void quick(std::vector<int>& v, const int l0, const int  ln)
{

	if(ln < l0)
	{
		return;
	}
	int p = partition (v,l0,ln);
	quick(v,l0,p-1);
	quick(v,p+1,ln);

}

void sort(std::vector<int>& v)
{
	quick(v,0,v.size()-1);
}


int main()
{
	//std::vector<int> v;
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
