#include<stdio.h>
int main ()
{
    int a,b;
    float x, y;
    scanf("%d %d %f", &a,&b,&x);
    y=b*x;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2f\n",y);


    return 0;
}
