#include<stdio.h>
int main()
{
    double  A,B,C,pi=3.14159;
    scanf("%lf %lf %lf", &A,&B,&C);
    double TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    TRIANGULO=0.5*A*C;
    CIRCULO=pi*C*C;
    TRAPEZIO=((A+B)/2)*C;
    QUADRADO=B*B;
    RETANGULO=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);
    return 0;
}
