/*For this challenge, you will be given an array and you are asked to find second largest number and second smallest number and multiply them.
*/

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
    int count;

    cin >> count;
    if (count > 2)
    {
        int *arr = new int[count];
        for (int i = 0; i < count; i++)
        {
            cin >> arr[i];
        }

        bubbleSort(arr, count);

        cout<<arr[1]*arr[count-2];

        delete[] arr;
    }

    return 0;
}
