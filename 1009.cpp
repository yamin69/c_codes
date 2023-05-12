#include<stdio.h>
int main()
{
    char s[100];
    double x,y,r=0.00;

    scanf("%s",&s);
    scanf("%lf%lf",&x,&y);
    r=(y*.15)+x;

    printf("TOTAL = R$ %.2lf\n",r);


    return 0;
}
