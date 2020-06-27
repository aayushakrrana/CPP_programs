#include<bits/stdc++.h>
using namespace std;

int search_element(int arr[],int size)
{
		int sElement;
		cout<<"Enter element to be searched: ";
		cin>>sElement;
		for (int i=0;i<size;i++)
	{
		if(arr[i]==sElement)
			{
				printf("Element %d is at the position %d.",sElement,i+1);
				return 0;
			}
	}
	
			cout<<"Element is not present in the array";
			return 0;
	
}

int main()
{
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter elements in array : ";
	for (int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	search_element(arr,size);
	
	
	return 0;
	
}
