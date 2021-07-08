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
// C++ program to check if an array is
// subarray of another array
 
/*#include <bits/stdc++.h>
using namespace std;
 
// Function to check if an array is
// subarray of another array
bool isSubArray(int A[], int B[], int n, int m)
{
    // Two pointers to traverse the arrays
    int i = 0, j = 0;
 
    // Traverse both arrays simultaneously
    while (i < n && j < m) {
 
        // If element matches
        // increment both pointers
        if (A[i] == B[j]) {
 
            i++;
            j++;
 
            // If array B is completely
            // traversed
            if (j == m)
                return true;
        }
        // If not,
        // increment i and reset j
        else {
            i = i - j + 1;
            j = 0;
        }
    }
 
    return false;
}
 
// Driver Code
int main()
{
    int A[] = { 2, 3, 0, 5, 1, 1, 2 };
    int n = sizeof(A) / sizeof(int);
    int B[] = { 3, 0, 5, 1 };
    int m = sizeof(B) / sizeof(int);
 
    if (isSubArray(A, B, n, m))
        cout << "YES\n";
    else
        cout << "NO\n";
 
    return 0;
}*/
