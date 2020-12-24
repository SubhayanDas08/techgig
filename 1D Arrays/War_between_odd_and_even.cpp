//You will be given an array and you need to find odd numbers and add them, find even numbers and add them. Then compare the result, if the sum of even numbers found to be greater then print 'Even' to the stdout, if sum of odd number is greater than print 'odd' to the stdout. If sum of both found to be equal, then print 'Tied' to the stdout.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int len;
    cin>>len;

    int *arr = new int[len]; 
    for(int i = 0; i < len; i++)
    cin>>arr[i];

    int even = 0;
    int odd = 0;

    for (int i = 0; i < len; i++)
    {
        if(arr[i]%2==0)
            {
                even+=arr[i];
            }
        else
            {
                odd+=arr[i];
            }
        
    }

    if (even>odd)
    {
        cout<<"Even";
    }
    else if (odd>even)
    {
        cout<<"Odd";
    }
    else
    {
        cout<<"Tied";
    }

    delete[] arr;
    return 0;
}
