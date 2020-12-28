/*Mike is a very passionate about sets. Lately, he is busy solving one of the problems on sets. He has to find whether if the sum of any of the non-empty subsets of the set A is zero.

Input Format
The first line contains an integer T, which is the total number of test cases.
T test cases follow.
Each test case consists of two lines.
The first line consists of a single integer N, which is the number of elements present in the set A.
The second line contains N space separated integers denoting the elements of the set A.

Constraints
1 ≤ T ≤10
1 ≤ N ≤ 4
-10^5 ≤ A[i] ≤ 10^5*/

// C++ program to print sums of all possible 
// subsets. 
#include<iostream> 
using namespace std; 

bool ans=false;
int flag=0;
// Prints sums of all subsets of arr[l..r] 
void subsetSums(int arr[], int l, int r,int sum=0) 
{ 
	// Print current subset 
	if (l > r) 
	{ 
		if (sum==0)
        {
            flag++;
        }
        
        if (flag>1)
        {
            ans=true;
        }
        
		return; 
	} 

	// Subset including arr[l] 
	subsetSums(arr, l+1, r, sum+arr[l]); 

	// Subset excluding arr[l] 
	subsetSums(arr, l+1, r, sum); 
} 

// Driver code 
int main() 
{ 
    int t, n;

    cin>>t;

    while(t>0)
        {
            cin>>n;

            int *arr = new int[n];
            for (int i = 0; i < n; i++)
            {
                cin>>arr[i];
            }

            subsetSums(arr, 0, n-1); 

            if(ans)
                {        
                    cout<<"Yes"<<endl;      
                }
                else
                {
                    cout<<"No"<<endl;
                }
            delete[] arr;

            ans=false;
            t--;
        }
	
	
	return 0; 
} 
