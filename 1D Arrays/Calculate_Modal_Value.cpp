//You will be given an array and you need to find the modal value.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
    int len;
    cin>>len;

    int* arr = new int[len];
 
    for (int i = 0; i < len; i++)
        {
            cin>>arr[i];
        }
    
    int count = 1, ctr = 1;
    int index = 0;

    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if(arr[i]==arr[j])
                {
                    ctr++;
                }
        }

        if(count<ctr)
            {
                count = ctr;
                index = i;
                ctr = 1;
            }
    }
    
    cout<<arr[index];

    delete[] arr;
    
    return 0;    
}
