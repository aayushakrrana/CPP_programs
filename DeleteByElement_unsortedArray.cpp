#include<bits/stdc++.h>
using namespace std;


int *adjust(int arr[],int size,int i)
{
	for(;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	return arr;
}

int delete_element(int arr[],int size)
{	char ch;
	int dElement;
	do
	{
	
	cout<<"Enter element to be deleted"<<endl;
	cin>>dElement;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==dElement)
		{
			adjust(arr,size,i);
			size--;
			
		}
		else
		{
			cout<<"Element not present"<<endl;
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"Delete another"<<endl;
	cin>>ch;
	}while(ch=='Y');
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
	delete_element(arr,size);
	
	
	return 0;
}
