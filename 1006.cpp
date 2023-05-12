#include<stdio.h>
int main()
{
    double x,y,z;
    double s=0.0;
    scanf("%lf%lf%lf",&x,&y,&z);

    s=(x*2+y*3+z*5)/10;

    printf("MEDIA = %.1lf\n",s);

    return 0;
}
