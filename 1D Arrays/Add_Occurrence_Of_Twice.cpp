//You will be given an array and you need to find the elements occurring twice and add them.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int len;
    cin>>len;

    int *arr = new int[len];

    for (int i = 0; i < len; i++)
    {
        cin>>arr[i];
    }
    
    int sum=0;
    int ctr=0;

    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if(arr[i]==arr[j])
                {
                    arr[j]=0;
                    ctr++;
                }
        }

        if (ctr==1)
        {
            sum+=arr[i];
        }
        ctr=0;        
    }
    
    cout<<sum;

    delete[] arr;
    return 0;
}
