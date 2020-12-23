//Given two sorted arrays such the arrays may have some common elements. Find the sum of the maximum sum path to reach from beginning of any array to end of any of the two arrays. We can switch from one array to another array only at common elements.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;

int max(int x, int y) 
{ 
    return (x > y) ? x : y; 
}

int main()
{
    int m, n;

    cin>>m;

    int *arr1 = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin>>arr1[i];
    }
    
    cin>>n;

    int *arr2 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    
    int sum1 = 0, sum2 = 0, result = 0;

    int i = 0, j = 0;

    while (i<m && j<n)
    {
        if(arr1[i] < arr2[j])
        {
            sum1+=arr1[i++];
        }
        else if (arr1[i] > arr2[j])
        {
            sum2+=arr2[j++];
        }
        else
        {
            result += max(sum1, sum2);
            sum1 = 0, sum2 = 0;

			int temp = i;
			while (i < m && arr1[i] == arr2[j])
				sum1 += arr1[i++];

			while (j < n && arr1[temp] == arr2[j])
				sum2 += arr2[j++];

			result += max(sum1, sum2);

			sum1 = 0, sum2 = 0;
        }
    }

    while (i < m)
		sum1 += arr1[i++];

	while (j < n)
		sum2 += arr2[j++];
    
    result += max(sum1, sum2);

    cout<<result;
    
    delete[] arr1;
    delete[] arr2;

    return 0;
}
