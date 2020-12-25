//You will be given an array and a number and you need to find the number of pairs of integers in the array whose sum is equal to given number in the input.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int n, sum;

    cin>>n;
    if (n>0)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        cin>>sum;

        int ctr=0;

        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[i] + arr[j] == sum)
                {
                    ctr++;
                }
                
            }

        }
        
        cout<<ctr;
        delete[] arr;
    }
    
    return 0;
}
