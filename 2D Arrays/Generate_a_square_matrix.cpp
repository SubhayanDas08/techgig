//Given an integer n, generate a square matrix filled with elements from 1 to n^2 in spiral order.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;

void spiralPrint(int m, int n, int **a) 
{ 
	int i, k = 0, l = 0;
	int ctr = 1; 

	/* k - starting row index 
		m - ending row index 
		l - starting column index 
		n - ending column index 
		i - iterator 
	*/

	while (k < m && l < n) { 
		/* Print the first row from the remaining rows */
		for (i = l; i < n; ++i) { 
			a[k][i]=ctr++;
			//cout<< a[k][i]<<" "; 
		} 
		k++; 

		/* Print the last column from the remaining columns */
		for (i = k; i < m; ++i) { 
			a[i][n - 1]=ctr++;
			//cout<< a[i][n - 1]<<" "; 
		} 
		n--; 

		/* Print the last row from the remaining rows */
		if (k < m) { 
			for (i = n - 1; i >= l; --i) {
				a[m - 1][i]=ctr++; 
				//cout<< a[m - 1][i]<<" "; 
			} 
			m--; 
		} 

		/* Print the first column from the remaining columns */
		if (l < n) { 
			for (i = m - 1; i >= k; --i) { 
				a[i][l]=ctr++;
				//cout<< a[i][l]<<" "; 
			} 
			l++; 
		} 
	} 
} 

int main()
{
    int count, count2;

    cin >> count;
    if (count > 0)
    {
        int **arr = new int*[count];
        
        for (int i = 0; i < count; i++)
        arr[i] = new int[count];

        spiralPrint(count, count, arr);        

		for (int i = 0; i < count; i++)
		{
        	for (int j = 0; j < count; j++)
                cout<<arr[i][j]<<" ";
			
			cout<<endl;
		}
        for (int i = 0; i < count; i++)
            delete[] arr[i];
 
        delete[] arr;
    }

    return 0;
}
