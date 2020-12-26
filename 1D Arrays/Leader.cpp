//Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, leaders are 17, 5 and 2

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
        for (int i = 0; i < count; i++)
        {
            cin >> arr[i];
        }

        int flag =-1;
        for (int i = 0; i < count-1; i++)
        {
            for (int j = i+1; j < count; j++)
            {
                if (arr[i]<arr[j])
                {
                    flag++;
                }
                
            }

            if (flag==-1)
            {
                cout<<arr[i]<<endl;
            }
            

            flag=-1;
        }
        
        cout<<arr[count-1];
        delete[] arr;
    }

    return 0;
}
