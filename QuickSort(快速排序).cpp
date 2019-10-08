#include<iostream>
using namespace std;

template<class DataType>

void QuickSort(DataType a[],int left,int right)
{    
	if(left<right)
	{
		int i=left;
		int j=right+1;
		int p=a[left];
		
		do
		{
			do i++; while(a[i]<p);
			do j--; while(a[j]>p);
			if(i<j)
				swap(a[j],a[i]);
		}while(i<j);
		swap(a[j],a[left]);
		
		QuickSort(a,left,j-1);
		QuickSort(a,j+1,right); 
	}
}

int main()
{
	int a[10]={6,7,8,9,10,1,2,3,4,5,};
	QuickSort(a,0,9);
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
} 
