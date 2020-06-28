#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int size,int val)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==val)
		{
			return i;
		}
	}
	return -1;
}



int main()
{
	int arr[]={14,15,75,98,56,32,12,45,7,5,85,95,302,115,4658,745,9684,1234,769412,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	int val=302;
	cout<<linearSearch(arr,size,val);

	return 0;
}
