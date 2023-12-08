#include<iostream>
#include<vector>
#include<string>


void merge(std::vector<int>& v, int left, int middle, int right)
{
	int n_left = middle - left + 1; // include middle element
	int n_right = right - middle; 

	int a_left[n_left], a_right[n_right]; // a - arrays, left and right
	for(int i=0; i< n_left; ++i)
	{
		a_left[i] = v[left+i];
	}
	for(int i=0; i<n_right; ++i)
	{
		a_right[i] = v[middle+1+i];
	}

	//merge
	int cursor_left = 0, cursor_right = 0;
	int k = left;

	//erase v[left,right] and insert a_left[],a_right[]
	while(cursor_left < n_left && cursor_right < n_right)
	{
		if(a_left[cursor_left] <= a_right[cursor_right])
		{
			v[k++] = a_left[cursor_left++];
		}
		else
		{
			v[k++] = a_right[cursor_right++];

		}
	}

	while(cursor_left < n_left )
	{

		v[k++] = a_left[cursor_left++];
	}
	while(cursor_right < n_right )
	{

		v[k++] = a_right[cursor_right++];
	}
}
void merge_sort(std::vector<int>& v, int left, int right)
{
 if(right<=left)
 {
	 return;
 }

 int middle = left + (right-left)/2;

 merge_sort(v,left,middle);
 merge_sort(v,middle+1,right);

 merge(v,left,middle,right);

}


void sort(std::vector<int>& v)
{

	merge_sort(v,0,v.size()-1);
}



int main()
{
	std::vector<int> v = {4,3,6,2};
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
