//Given a 2D array, Sum the elements of the array.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;

int main()
{
    int count, count2;

    cin >> count >> count2;
    if (count > 0)
    {
        int **arr = new int*[count];
        
        for (int i = 0; i < count; i++)
        arr[i] = new int[count2];
 
        for (int i = 0; i < count; i++)
            for (int j = 0; j < count2; j++)
                cin>>arr[i][j];

        int sum = 0;

        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < count2; j++)
            {
                sum+=arr[i][j];                
            }
            
        }

        cout<<sum;
        
        for (int i = 0; i < count; i++)
            delete[] arr[i];
 
        delete[] arr;
    }

    return 0;
}
