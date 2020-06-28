#include<bits/stdc++.h>
using namespace std;

/*
int binarySearch(int arr[],int l,int r,int x) //recursive
{ 
	if (r >= l) { 
		int mid = (l + r)  / 2; 

		if (arr[mid] == x) 
			return mid; 
 
		if (arr[mid] > x) 
			return binarySearch(arr, l, mid - 1, x); 

	
		return binarySearch(arr, mid + 1, r, x); 
	} 

	return -1; 
} */

int binarySearch(int arr[],int left,int right,int val) //iterative
{
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr[mid]==val)
		return mid;
		
		if(arr[mid]>val)
		{
			right=mid-1;
		}
		if(arr[mid]<val)
		{
			left=mid+1;
		}
	}
	return -1;
}

int main()
{
	int arr[]={2,23,45,78,96,888,899};
	int x;  
	cin>>x;
	int right=(sizeof(arr)/sizeof(arr[0]));
	cout<<binarySearch(arr,0,right-1,x);
	
	return 0;
}

