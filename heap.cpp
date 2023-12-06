#include<iostream>
#include<vector>
#include<string>


void maxHeapify(std::vector<int>& v, int i0, int size)
{
	if(i0>= size)
	{
		return;
	}

	int left = 2*i0+1;
	int right=2*i0+2;
	int largest = i0;

        if(left < size && v[largest] < v[left])
	{
		largest = left;
	}
	if(right < size && v[largest] < v[right])
	{
		largest = right;
	}

	if(largest != i0)
	{
		int temp = v[largest];
		v[largest] = v[i0];
		v[i0] = temp;

                 maxHeapify(v,largest,size);

	}
}


void heap(std::vector<int>& v)
{
	for(int i=v.size()/2-1; i>=0; --i)
	{
               maxHeapify(v,i,v.size());
	}

	for(int i = v.size() -1; i>0; --i)
	{
		int temp = v[0];
		v[0] = v[i];
		v[i] = temp;
		maxHeapify(v,0,i);
	}
	/*for(int i=1; i<v.size(); ++i)
	{

		int temp = v[0];
		v[0] = v[v.size()-i];
		v[v.size()-i] = temp;
		maxHeapify(v,0,v.size()-i);
	}
*/
}

void sort(std::vector<int>& v)
{
heap(v);
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
