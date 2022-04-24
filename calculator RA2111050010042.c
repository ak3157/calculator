#include <stdio.h>

int main()
{
    float num1,num2,result;
    char op;

    printf("Enter the operator(+,-,*,/):");
    scanf("%c",&op);

    printf("Enter number 1 and number 2:");
    scanf("%f %f",&num1,&num2);

    if(op=='+')
    result=num1+num2;

    else if(op=='-')
    result=num1-num2;

    else if(op=='*')
    result=num1-num2;

    else if(op=='/')
    result=num1/num2;

    else
    printf("Error");

    printf("%.f is the result of %c on %.f and %.f",result,op,num1,num2);
    return 0;
}
