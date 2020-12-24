//You will be given an array and you need to find the biggest difference between any two numbers present in the array.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int n;

    cin>>n;
    if(n!=0)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int small=0, large=0;

        for (int i = 1; i < n; i++)
        {
            if (arr[i]>arr[large])
            {
                large = i;
            }
            else if (arr[i]<arr[small])
            {
                small = i;
            }        
        }
        int num = arr[large] - arr[small];
        cout<<num;

        delete[] arr;
    }
    return 0;
}
