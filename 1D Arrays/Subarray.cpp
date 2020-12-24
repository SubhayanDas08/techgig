/*You are given array consisting of n integers. Your task is to find the maximum length of an increasing subarray of the given array.
A subarray is the sequence of consecutive elements of the array. Subarray is called increasing if each element of this subarray strictly greater than previous.*/

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int n;

    cin>>n;
    if (n>0)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int ctr = 1, flag = 0;

        for (int i = 0; i < n-1; i++)
        {
            if (arr[i]<arr[i+1])
            {
                ctr++;
            }
            else if (arr[i]>arr[i+1])
            {
                ctr = 1;
            }
            
            if (ctr>flag)
            {
                flag = ctr;
            }
            
        }
        
        cout<<flag;
        delete[] arr;
    }

    return 0;
}
