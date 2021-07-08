#include<bits/stdc++.h>
using namespace std;
bool isSubsequencevalid(int arr[],int subarr[],int n,int num)
{
	int i=0,j=0;
while(i<n&&j<num)
	{
			if(arr[i]==subarr[j])
		{
			i++;
			j++;
			if(j==num)
			return true;
		}
		else
		{
			i=i-j+1;
			j=0;
		}
		
	}
	return false;
}
int main()
{
int arr[] = { 2, 3, 0, 5, 1, 1, 2 };
    int n = sizeof(arr) / sizeof(int);
    int subarr[] = { 3, 0, 5, 1 };
    int num = sizeof(subarr) / sizeof(int);
	if(isSubsequencevalid(arr,subarr,n,num))
		cout<<"True\n";
		else
		cout<<"False\n";
		return 0;
	
}
