#include<iostream>
using namespace std;
/*
	Name: 
	Copyright: 
	Author: Baixufan
	Date: 09/10/19 20:23
	Description: 
*/

void InsertionSort(int a[],int n)
{
	 for(int i=1;i<n;i++)
	 {
	 	int key=a[i];
	 	int j=i-1;
	 	
	 	while(j>=0&&a[j]>key)
	 	{
	 		a[j+1]=a[j];
	 		j--;
		}
		a[j+1]=key;
	 }
}

int main()
{
	int a[10]={10,9,8,7,6,5,4,3,2,1};
	InsertionSort(a,10);
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
	return 0;
}
