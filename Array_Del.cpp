#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cout<<"Enter the no of elements"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element to be deleted"<<endl;
	cin>>x;
	int index=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
		index=i;
		break;	
		}
    }
		if(index==-1)
		{
			cout<<"Element not found"<<endl;
			return 0;
		}
		else
		{
			n--;
			for(int i=index;i<n;i++)
				arr[i]=arr[i+1];
			for(int i=0;i<n;i++)
				cout<<arr[i]<<" ";
				cout<<endl;
		}
		return 0;
	
}
