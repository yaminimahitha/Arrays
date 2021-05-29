#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=0;
	int arr[n];
	cout<<"Enter number of elements"<<endl;
	cin>>n;
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
    for(int j=i+1;j<n;j++)
    {
    	if(arr[i]>arr[j])
    	{
    		flag=1;
    		break;
		}
	}
	if(flag!=0)
	{
		cout<<"not sorted"<<endl;
		break;
	}
}
if(flag==0)
{
	cout<<"sorted"<<endl;
}
return 0;	
}
