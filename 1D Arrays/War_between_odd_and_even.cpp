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
