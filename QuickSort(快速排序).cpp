#include<iostream>

using namespace std;

template<class DataType>

int Partition(DataType a,int left,int right)
{
	int x=a[right];
	int i=left-1;
	
	for(int j=left;j<right;j++)
	{
		if(a[j]<=x)
		{
			i++;
			swap(a[i],a[j]);
		}	
	}
	
	swap(a[right],a[i+1]);
	return i+1;
}

template<class DataType>

void QuickSort(DataType a,int left,int right)
{
	if(left<right)
	{
		int q=Partition(a,left,right);
		QuickSort(a,left,q-1);
		QuickSort(a,q+1,right);
	}
}

int main()
{
	int a[10];
	for(int i=0;i<10;i++)
		cin>>a[i];
	
	QuickSort(a,0,9);
	
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
	return 0;
 } 
