#include<bits/stdc++.h>
using namespace std;

int swap(int *i,int *j)
{
	int temp=*i;
	*i=*j;
	*j=temp;
}

int bubbleSort(int arr[],int n)
{	
	for(int j=0;j<n-1;j++)
	{
	
	
		for(int i=0;i<n-j-1;i++)
		{
			if(arr[i]>arr[i+1])
			swap(&arr[i],&arr[i+1]);
		}
	}
}

int main()
{
	int arr[]={12,45,78,98,65,32,74,85,96,14,25,36,48,68,42,88,01,9,26};
	int size=sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,size);
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
