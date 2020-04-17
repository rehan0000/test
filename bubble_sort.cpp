#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int *arr,int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		int swapped=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];
				    arr[j]=arr[j+1];
				    arr[j+1]=temp;
				    swapped=1;
			}
		}
		if(swapped==0)
		    break;
	}
	return;
}
int main()
{
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
		bubble_sort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}

