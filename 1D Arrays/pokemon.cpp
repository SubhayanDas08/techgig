/*Sergei B., the young coach of Pokemons, has found the big house which consists of n flats ordered in a row from left to right. It is possible to enter each flat from the street. It is possible to go out from each flat. Also, each flat is connected with the flat to the left and the flat to the right. Flat number 1 is only connected with the flat number 2 and the flat number n is only connected with the flat number n - 1.

There is exactly one Pokemon of some type in each of these flats. Sergei B. asked residents of the house to let him enter their flats in order to catch Pokemons. After consulting the residents of the house decided to let Sergei B. enter one flat from the street, visit several flats and then go out from some flat. But they won't let him visit the same flat more than once.
Sergei B. was very pleased, and now he wants to visit as few flats as possible in order to collect Pokemons of all types that appear in this house. Your task is to help him and determine this minimum number of flats he has to visit.*/

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int n;

    cin>>n;
    if (n>0)
    {
        
        char *arr = new char[n];
        char *temp = new char[n];
        int ctr=0, flag=0;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            for (int j = 0; temp[j]!='\0'; j++)
            {
                if (arr[i]==temp[j])
                {
                    flag++;
                }
                
            }
            if (flag==0)
            {
                temp[ctr]=arr[i];
                ctr++;
            }
            
            flag=0;
        }
    
        cout<<ctr;


        delete[] arr;
        delete[] temp;
    }
    
    

    return 0;
}

