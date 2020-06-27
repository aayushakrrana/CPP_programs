#include<bits/stdc++.h>
using namespace std;


search_element(int arr[],int size)
{
	int ePos;
	cout<<"Enter Position for the element";
	cin>>ePos;
	if(ePos<1)
	{
		cout<<"Invalid Position";
		return 0;
	}
	else if(ePos>size)
	{
		cout<<"Out of Range";
		return 0;
	}
	else
	{
		printf("Element at %d position is %d",ePos,arr[ePos-1]);
		return 0;
	}
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
