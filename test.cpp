#include<iostream>
#include<vector>
#include<string>

void maxHeapify(std::vector<int>& v, int heapSize, int  i);
void sort(std::vector<int>& v)
{
	for(int i=v.size()/2-1; i>=0; --i)
	{
		maxHeapify(v,v.size(), i);
	}
	for(int i=v.size()-1; i>=0; --i)
	{
		int temp = v[0];
		v[0] = v[i];
		v[i] = temp;

		maxHeapify(v,i,0);
	}
}
void maxHeapify(std::vector<int>& v, int heapSize, int  i)
{
//	if(i >=  heapSize || i< 0)
//		std::cout << "Mistake 1\n";
//	return;

	int left = 2*i+1;
	int right = 2*i +2;

	int largest = i;
	if(left < heapSize && v[left] > v[largest])
	{
		 largest= left;	
	}
	if(right < heapSize && v[right] > v[largest])
	{
		largest = right;
	}
	if(largest != i)
	{
		int temp = v[i];
		v[i] = v[largest];
		v[largest] = temp;
		maxHeapify(v,heapSize, largest);

	}

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
