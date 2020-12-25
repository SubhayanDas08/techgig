//Given an array of integers and a number x, find the smallest subarray with sum greater than the given value. Print the length of the smallest subarray.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;

int smallestSubWithSum(int arr[], int n, int x) 
{  
     int min_len = n + 1; 
  
     for (int start=0; start<n; start++) 
     { 
          int curr_sum = arr[start]; 
  
          if (curr_sum > x) 
            return 1; 
  
          for (int end=start+1; end<n; end++) 
          { 
              curr_sum += arr[end]; 
  
              if (curr_sum > x && (end - start + 1) < min_len) 
                 min_len = (end - start + 1); 
          } 
     } 
     return min_len; 
} 
  
int main()
{
    int count;

    cin >> count;
    if (count > 0)
    {
        int *arr = new int[count];
        for (int i = 0; i < count; i++)
        {
            cin >> arr[i];
        }

        int X;
        cin>>X;

        cout<<smallestSubWithSum(arr, count, X);

        delete[] arr;
    }

    return 0;
}
