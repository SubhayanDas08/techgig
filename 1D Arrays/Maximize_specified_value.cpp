//Given an array, arr[] find the maximum value of (arr[i] i) (arr[j] j) where i is not equal to j. Where i and j vary from 0 to n-1 and n is size of input array arr[].

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int n;

    cin>>n;
    if(n>2)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        int I=0, J=0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i!=j)
                {
                    if((arr[I]-I)-(arr[J]-J)<(arr[i]-i)-(arr[j]-j))
                        {
                            I=i;
                            J=j;
                        }
                }
                
            }
            
        }

        cout<<(arr[I]-I)-(arr[J]-J);
        
        delete[] arr;
    }
    return 0;
}

