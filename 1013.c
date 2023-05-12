#include<stdio.h>
int main()
{
    int a,b,c,mj,bj;
    scanf("%d%d%d", &a,&b,&c);
    mj=(a+b+abs(a-b))/2;
    bj=(mj+c+abs(mj-c))/2;


    printf("%d eh o maior\n",bj);

    return 0;
}

