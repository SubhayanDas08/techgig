//For this challenge, you will be given an array and you are asked to form a number with the help of odd numbers available in the array. Actually, you need to form the bigger number out of the given odd numbers.In case you did not found any odd number, print 0 to the stdout.
/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/

#include<iostream>

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

    int ctr=0;

    for (int i = n-1; i >= 0; i--)
    {
        if (arr[i]%2!=0)
        {
            cout<<arr[i];
            ctr++;
        }

    }

    if (ctr==0)
    {
        cout<<0;
    }

        delete[] arr;
}