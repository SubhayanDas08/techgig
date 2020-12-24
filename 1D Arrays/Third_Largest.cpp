//You will be given an array and you need to find the third largest and print it to the stdout.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}    
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}

int main(int argc, char *a[])
{
    int len;
    cin>>len;
    
    if(len>=3)
        {
        int *arr = new int[len]; 
        for(int i = 0; i < len; i++)
            cin>>arr[i];

        bubbleSort(arr,len);

        cout<<arr[len-3];
        }
}
