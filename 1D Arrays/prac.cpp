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