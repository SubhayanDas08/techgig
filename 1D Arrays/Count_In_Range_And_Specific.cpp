//You will be given an array and a range and you need to count how many array elements lies in that range and not divisible by 3 and 5.

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int lower_limit, higher_limit;
    cin >> lower_limit >> higher_limit;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= lower_limit && a[i] <= higher_limit && a[i] % 3 != 0 && a[i] % 5 != 0)
            count++;
    }
    cout << count << endl;
    delete[] a;
    
    return 0;
}
