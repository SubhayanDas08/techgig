//For this challenge, you need to take 2 matrices as an input the stdin , add them and print the resultant matrix to the stdout.

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

        int **arr2 = new int*[count];
        
        for (int i = 0; i < count; i++)
        arr2[i] = new int[count2];
 
        for (int i = 0; i < count; i++)
            for (int j = 0; j < count2; j++)
                cin>>arr2[i][j];
        
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < count2; j++)
            {
                arr2[i][j] += arr[i][j];
            }
            
        }
        
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < count2; j++)
            {
                cout<<arr2[i][j];
                    
                if (j!=count2-1)
                {
                    cout<<" ";
                }
                    
            }
            cout<<endl;
        }


        for (int i = 0; i < count; i++)
            delete[] arr2[i];
 
        delete[] arr2;

        for (int i = 0; i < count; i++)
            delete[] arr[i];
 
        delete[] arr;
    }

    return 0;
}
