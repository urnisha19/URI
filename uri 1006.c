#include<stdio.h>
int main()
{
    float A,B,C,average;
    scanf("%f %f %f",&A,&B,&C);
    average=((A*2)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %.1f\n",average);
    return 0;

}
