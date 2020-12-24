/*For this challenge, you need to take integer as input on one line which will tell number of array elements and array elements as an input on another line and find the majority number and print that number to the stdout. If not found return -1.

(Majority Element: A majority element in an array A[] of size n is an element that appears more than n/2 times.)
*/

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
        int *temp = new int[n];

        int ctr=1, flag=0, ct = 0;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j <= ct; j++)
            {
                if (arr[i]==temp[j])
                {
                    flag++;
                }

            }

        if(flag==0)
            {
                for (int j = i+1; j < n; j++)
                {
                    if (arr[i]==arr[j])
                    {
                        ctr++;
                    }
                    
                }

                if (ctr > (n/2))
                {
                    temp[ct++]=arr[i];

                }                
                
            }
        ctr=1;
        flag=0;
            
        }
        
        if(ct>0)
        {
            for (int i = 0; i < ct; i++)
            {
                cout<<temp[i]<<" ";
            }
        }
        else
        {
            cout<<-1;
        }
        
        delete[] temp;
        delete[] arr;
    }

    return 0;
}
