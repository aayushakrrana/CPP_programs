#include<bits/stdc++.h>
using namespace std;

int swap(int *p,int *q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}

selectionSort(int arr[],int n)
{
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			swap(&arr[i],&arr[j]);
		}
		
	}
}

int main(){
	int arr[]={10 ,56,85,41,23,9,8,74,51,24,68};
	int n=sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
