#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d", &X,&Y);
    double prices[5]= {4.00, 4.50, 5.00, 2.00, 1.50};
    switch(X)
    {
    case 1:
        printf("Total: R$ %.2lf\n", Y*prices[0]);
        break;
    case 2:
        printf("Total: R$ %.2lf\n", Y*prices[1]);
        break;
    case 3:
        printf("Total: R$ %.2lf\n", Y*prices[2]);
        break;
    case 4:
        printf("Total: R$ %.2lf\n", Y*prices[3]);
        break;
    case 5:
        printf("Total: R$ %.2lf\n", Y*prices[4]);
        break;
    }
    return 0;
}
