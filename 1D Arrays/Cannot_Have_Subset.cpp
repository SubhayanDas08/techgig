//Given a sorted array (sorted in non-decreasing order) of positive numbers, find the smallest positive integer value that cannot be represented as sum of elements of any subset of given set.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include<math.h>
using namespace std;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  
  

int main()
{
    int count;

    cin >> count;
    if (count > 0)
    {
        int *arr = new int[count];
        int size = pow(2,count);
        // cout<<size<<endl;
        int *temp = new int[size];

        for (int i = 0; i < count; i++)
        {
            cin >> arr[i];
        }
        int ctr=0;
        for (int i = 0; i < count-1; i++)
        {
            
            temp[ctr++] = arr[i];
            int ct = arr[i];
            
            for (int k = i+1; k < count; k++)
            {
                ct+=arr[k];
                temp[ctr++]=arr[k];
            }
            
        }

        temp[ctr++] = arr[count-1];

        cout<<ctr<<endl;
        bubbleSort(arr, ctr);

        // for (int i = 0; i < ctr; i++)
        // {
        //     cout<<" "<<temp[i];
        // }
        // cout<<endl;

        int flag=-1;
        for (int i = 0; i < ctr-1; i++)
        {
            if(temp[i+1]-temp[i]>0)
                {
                    cout<<temp[i]+1;
                    flag++;
                    break;
                }
        }

        if (flag==-1)
        {
            cout<<temp[ctr-1]+1;
        }
        
        
        delete[] arr;
    }

    return 0;
}
