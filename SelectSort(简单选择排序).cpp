#include<iostream>
using namespace std;

void SelectSort(int *a,int n);

int main()
{
	int a[]={1,3,5,7,9,0,2,4,6,8};
	SelectSort(a,10);
	for(int i=0;i<10;i++)
		cout<<a[i]<<'\t';
	cout<<endl;
	return 0;
}

void SelectSort(int *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		
		for(int j=i+1;j<n;j++)
			if(a[j]<a[min])
				min=j;
		
		swap(a[i],a[min]);
	}
}
