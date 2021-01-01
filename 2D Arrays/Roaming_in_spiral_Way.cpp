//Given a 2D matrix(square or rectangular) print it in spiral way.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;

void spiralPrint(int m, int n, int **a) 
{ 
	int i, k = 0, l = 0; 

	/* k - starting row index 
		m - ending row index 
		l - starting column index 
		n - ending column index 
		i - iterator 
	*/

	while (k < m && l < n) { 
		/* Print the first row from the remaining rows */
		for (i = l; i < n; ++i) { 
			cout<< a[k][i]<<" "; 
		} 
		k++; 

		/* Print the last column from the remaining columns */
		for (i = k; i < m; ++i) { 
			cout<< a[i][n - 1]<<" "; 
		} 
		n--; 

		/* Print the last row from the remaining rows */
		if (k < m) { 
			for (i = n - 1; i >= l; --i) { 
				cout<< a[m - 1][i]<<" "; 
			} 
			m--; 
		} 

		/* Print the first column from the remaining columns */
		if (l < n) { 
			for (i = m - 1; i >= k; --i) { 
				cout<< a[i][l]<<" "; 
			} 
			l++; 
		} 
	} 
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

		spiralPrint(count, count2, arr);
 
        for (int i = 0; i < count; i++)
            delete[] arr[i];
 
        delete[] arr;
    }

    return 0;
}
