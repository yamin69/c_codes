#include<stdio.h>
int main()
{
    int n1,n2,quan1,quan2;
    float price1,price2;
    double sum=0;
    scanf("%d",&n1);
    scanf("%d",&quan1);
    scanf("%f",&price1);

    scanf("%d",&n2);
    scanf("%d",&quan2);
    scanf("%f",&price2);

    sum= ((quan1*price1)+(quan2*price2));

    printf("VALOR A PAGAR: R$ %.2lf\n",sum);


    return 0;
}
