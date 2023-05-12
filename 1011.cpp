#include<stdio.h>
#include<math.h>
int main()
{

    int r;
    double vol=0;
    scanf("%d",&r);

    vol=((4.0/3)*3.14159*pow(r,3));

    printf("VOLUME = %.3lf\n",vol);


    return 0;
}
