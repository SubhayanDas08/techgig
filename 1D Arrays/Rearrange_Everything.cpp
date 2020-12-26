//Given an array of size n where all elements are in range from 0 to n-1, change contents of arr[] so that arr[i] = j is changed to arr[j] = i.

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
        int *temp = new int[count];
        for (int i = 0; i < count; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < count; i++)
        {
            temp[arr[i]]=i;
        }
        
        arr=temp;

        for (int i = 0; i < count; i++)
        {
            cout<<arr[i]<<endl;
        }
        delete[] arr;
        delete[] temp;
    }

    return 0;
}
