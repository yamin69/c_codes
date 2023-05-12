#include<stdio.h>
int main()
{
    int x;
    float y;
    double res=0;
    scanf("%d%f",&x,&y);

    res = (x/y);

    printf("%.3lf km/l\n",res);

    return 0;
}
