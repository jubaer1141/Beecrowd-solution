#include<stdio.h>
#include<math.h>
int main()
{
    float x1, y1, x2, y2, distance,op;
    scanf("%f %f %f %f",&x1, &y1, &x2, &y2);

    distance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    op= sqrt(distance);

    printf("%.4f\n",op);

    return 0;

}
