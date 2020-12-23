//For this challenge, you will be given an array and you are asked to count how many numbers are negative.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{ 
    int n;
    cin>>n;

    int *arr= new int[n];

    int ctr=0;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];        
        if (arr[i]<0)
        {
            ctr++;
        }
        
    }

    cout<<ctr;
    delete[] arr;
}
