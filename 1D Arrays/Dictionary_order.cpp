//You will be given an array of strings and you are asked to sort thecount lexicographically. Note: the length of the array should not be less than 2.

/*Enter your code here. Read input frocount STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;

void swap(string *xp, string *yp)  
{  
    string temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
// A function to implement bubble sort  
void bubbleSort(string arr[], int n)  
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
        string *arr = new string[count];

        for (int i = 0; i < count; i++)
        {
            cin >> arr[i];
        }

        bubbleSort(arr, count);

        for (int i = 0; i < count; i++)
        {
            cout << arr[i]<<endl;
        }
        delete[] arr;
    }

    return 0;
}
