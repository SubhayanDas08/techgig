/*Given an array where every element occurs multiple times, except one element which occurs only once. Find the element that occurs once.*/

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;

int main()
{
    int count;

    cin >> count;
    if (count > 0)
    {
        int *arr = new int[count];
        for (int i = 0; i < count; i++)
        {
            cin >> arr[i];
        }

        int ctr = 0;

        for (int i = 0; i < count-1; i++)
        {
            if(arr[i]!=-1)
            {
                for (int j = i+1; j < count; j++)
                {
                    if (arr[i]==arr[j])
                    {
                        arr[j]=-1;
                        ctr++;
                    }
                    
                }

                if (ctr==0)
                {
                    cout<<arr[i];
                    break;
                }
            
            ctr=0;
            }
        }
        
        delete[] arr;
    }

    return 0;
}
