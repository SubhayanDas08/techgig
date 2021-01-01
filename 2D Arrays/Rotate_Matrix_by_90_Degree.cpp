//You are given an n x n 2D matrix representing an image. Rotate the image by 90 degrees (clockwise).

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
                cin>>arr[j][i];

        
        for (int i = 0; i < count; i++)
            for (int j = 0 ; j < count2/2; j++)
                {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][count2-j-1];
                    arr[i][count2-j-1] = temp;
                }
        
        for (int i = 0; i < count; i++)
            {
            for (int j = 0; j < count2; j++)
               { 
                   cout<<arr[i][j];
                   
                       cout<<" ";
                
                }
            cout<<endl;
            }

        
        for (int i = 0; i < count; i++)
            delete[] arr[i];
 
        delete[] arr;
    }

    return 0;
}
