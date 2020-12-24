/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int n;

    cin>>n;
    if (n>0)
    {
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        delete[] arr;
    }
    
    return 0;
}
