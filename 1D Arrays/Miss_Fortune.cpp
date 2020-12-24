/*According to an old legeng, a long time ago Ankh-Morpork residents did something wrong to miss Fortune, and she cursed them. She said that at some time n snacks of distinct sizes will fall on the city, and the residents should build a Snacktower of them by placing snacks one on another. Of course, big snacks should be at the bottom of the tower, while small snacks should be at the top.

Years passed, and once different snacks started to fall onto the city, and the residents began to build the Snacktower.
However, they faced some troubles. Each day exactly one snack fell onto the city, but their order was strange. So, at some days the residents weren't able to put the new stack on the top of the Snacktower: they had to wait until all the bigger snacks fell. Of course, in order to not to anger miss Fortune again, the residents placed each snack on the top of the tower immediately as they could do it.
Write a program that models the behavior of Ankh-Morpork residents.*/

/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	int n,days;

    cin>>days;
	if (days>0)
	{
        int *temp = new int[days];

        int ctr;

        for (int i = 0; i < days; temp[i++]=0);

		for (int i = 0; i < days; i++)
		{
            cin>>temp[i];
		}   

        n=days;

        while(n>0)
        {        
            for (int i = 0; i < days; i++)
            {
                if (temp[i]==n)
                {
                    cout<<temp[i];
                    n--;
                }
                else if(temp[i]<n)
                {
                    cout<<"\n"<<0<<endl;
                }
                
                
            }
        }   
        
		delete[] temp;
	}

    return 0;
}