/*Given an array of positive and negative numbers, find if there is a subarray (of size at-least one) with 0 sum. If found, print 'Yes' else 'No'*/

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

        int sum = 0, flag=-1;

        for (int i = 0; i < n-1; i++)
        {
            sum = arr[i];
            if (sum==0)
                    {
                        cout<<"Yes";
                        flag++;
                        break;
                    }
            
            for (int j = i+1; j < n; j++)
            {
            if(i!=j)
               {
                sum += arr[j];

                if (sum==0)
                    {
                        cout<<"Yes";
                        flag++;
                        break;
                    }
                }
            }
            
        }

        if (flag==-1)
        {
            cout<<"No";
        }
        
        
        delete[] arr;
    }

    return 0;
}
