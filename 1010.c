#include<stdio.h>
int main()
{
    int a, b, d, e;
    float c,f,unit1,unit2,pagar;

    scanf("%d %d %f",&a, &b, &c);
    scanf("%d %d %f",&d, &e, &f);

    unit1=b*c;
    unit2=e*f;
    pagar=unit1+unit2;

    printf("VALOR A PAGAR: R$ %.2f\n",pagar);

    return 0;
}
