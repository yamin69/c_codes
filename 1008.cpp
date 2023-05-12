#include<stdio.h>
int main()
{
    int x,y;
    float z,s=0.00;

    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%f",&z);

    s=(y*z);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n",x,s);

    return 0;
}
