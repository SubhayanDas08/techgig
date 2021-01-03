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
        // for (int i = 0; i < count; i++)
        // {
        //     cin >> arr[i];
        // }
        cout<<"Hello World!";
        delete[] arr;
    }

    return 0;
}
