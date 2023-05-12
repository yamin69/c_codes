#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);

    for(i=1; i<x; i++)
    {
        if(i%2!=0)
        {
            printf("I hate that ");
        }
       if(i%2==0)
        {
            printf("I love that ");
        }
    }
    if(x%2!=0)
    {
        printf("I hate it");
    }
    if(x%2==0)
    {
        printf("I love it");
    }


    return 0;
}
