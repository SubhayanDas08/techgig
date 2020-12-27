//You are given a matrix with M rows and N columns. Print count of all possible paths from top left to bottom right of a mXn matrix

// A C++ program to count all possible paths 
// from top left to bottom right 

#include <iostream> 
using namespace std; 

// Returns count of possible paths to reach cell at row 
// number m and column number n from the topmost leftmost 
// cell (cell at 1, 1) 
int numberOfPaths(int m, int n) 
{ 
	// If either given row number is first or given column 
	// number is first 
	if (m == 0 || n == 0) 
		return 1; 

	// If diagonal movements are allowed then the last 
	// addition is required. 
	return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1); 
	// + numberOfPaths(m-1, n-1); 
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

	cout << numberOfPaths(count-1, count2-1); 
 
        for (int i = 0; i < count; i++)
            delete[] arr[i];
 
        delete[] arr;
    }

	return 0; 
} 
