#include<iostream>
#include<vector>
#include<string>


void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b =temp;
}

int partition(int *a, const int l0, const int ln)
{
	int k = l0;
	int pivot = a[ln];

	for(int i=l0; i<ln; ++i)
	{
		if(a[i] < pivot)
		{
			swap(a[k],a[i]);
			++k;
		}
	}
	swap(a[ln],a[k]);
	return k;
}


void quick_sort( int* a, const int l0, const int ln)
{
	if(ln <= l0)
	{
		return;
	}

	int p = partition (a,l0,ln);
	quick_sort(a,l0,p-1);
	quick_sort(a,p+1,ln);

}


void sort(int* a, int l0, int ln)
{
	quick_sort(a,l0,ln);
}

int main()
{
	int a[6] = {3,8,4,0,7,3};
	for (auto& i : a)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";

	sort(a,0,5);


	for (auto& i : a)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";

	return 0;
}
