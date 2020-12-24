#include<stdio.h>               //Binary Search
#include<stdlib.h>

#define size 10

void swap(int *a,int *b)
    {
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
    }

void sort(int *a)
    {
        for(int i=0;i<size-1;i++)
            {
                for(int j=0;j<size-i-1;j++)
                    {
                        if(a[j]>a[j+1])
                            swap(&a[j],&a[j+1]);
                    }
            }
    }

int binary_search(int *a, int val)
    {
        int i=0;
        int j=size-1;
        int key;
        int flag=-1;

        while (j>=i)
        {
            key=(i+j)/2;
            if(a[key]>val)
                {
                    j=key-1;
                }
            else if(a[key]<val)
                {
                    i=key+1;
                }
            else if (a[key]==val)
            {
                flag++;
                break;
            }
            
        }
        

        if(flag!=-1)
            return(key);
        else
            return(-1);
        
    }

int main()
{
    int arr[size], val,pos;

    for(int i=0;i<size;i++)
        arr[i]=rand();

    printf("Array: \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }

    sort(arr);

    printf("\nArray: \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n\nEnter the value you want to search: ");
    scanf("%d",&val);

    pos=binary_search(arr,val);

    if(pos!=-1)    
        printf("\nFound at: %d",pos);
    else
        printf("\nValue Not Found");
    
}
