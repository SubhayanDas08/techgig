//You will be given a two-dimensional array and a number and you are asked to find whether the given matrix is Toepliz or not.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;

bool check_diagonal(int **arr, int r, int c, int count, int count2)
{
    int res = arr[r][c];

    while (++r<count && ++c<count2)
    {
        if (res!=arr[r][c])
        {
            return false;
        }     
        
    }

return true;
}

bool check_topelizt(int **arr, int count, int count2)
{
//checking the first row

    for (int i = 0; i < count; i++)
    {
        if(check_diagonal(arr, i, 0, count, count2) == false)
            return false;
    }

//checking the first column

    for (int j = 0; j < count2; j++)
    {
        if(check_diagonal(arr, 0, j, count, count2) == false)
            return false;
    }
    

return true;
}
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

        if(check_topelizt(arr, count, count2))
            {
                cout<<1;
            }        
        else
            {
                cout<<-1;
            }
        
        for (int i = 0; i < count; i++)
            delete[] arr[i];
 
        delete[] arr;
    }

    return 0;
}
