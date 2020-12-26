//For this challenge, you will be given an array and you are asked to find the second largest even number and print it to the stdout.
/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
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
	int n;
    cin>>n;

    int *arr= new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];        
    }

    bubbleSort(arr, n);

    int index = n-1, ctr=0;

    while ((ctr==0 || arr[index]%2!=0) && index>=0)
    {
        index--;

        if (arr[index]%2==0)
        {
            ctr++;
        }
    }
    
    if (index>=0)
    {
        cout<<arr[index];
    }
    else
    {
        cout<<0;
    }
    
    
    delete[] arr;
}

