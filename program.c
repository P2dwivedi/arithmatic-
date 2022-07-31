#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    int add,sub,mul,div,mod;
    float fdiv;
    printf("\n enetr the first number:");
    scanf("%d",&num1);
    printf("\n enetr the second number:");
    scanf("%d",&num2);
    add=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=num1/num2;
    mod=num1%num2;
    fdiv=(float)num1/num2;
    printf("\n add=%d \n sub=%d \n mul=%d \n div=%d \n mod=%d  \n fdiv=%f",add,sub,mul,div,mod,fdiv);
    return 0;
}