#include<stdio.h>
int main()
{
    int code1,number1,code2,number2;
    float price1,price2,amount_to_pay;
    scanf("%d %d %f", &code1,&number1,&price1);
    scanf("%d %d %f", &code2,&number2,&price2);
    amount_to_pay=number1*price1+number2*price2;
    printf("VALOR A PAGAR: R$ %.2f\n",amount_to_pay);
    return 0;
}
