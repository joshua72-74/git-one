#include<stdio.h>
int main(){
    char operator;
    double n1,n2;

    printf("Enter an Operator (+,-,*,/) : ");
    scanf("%c",&operator);

    printf("Enter two operands : ");
    scanf("%lf %lf",&n1,&n2);

    double add=n1+n2;
    double sub=n1-n2;
    double mul=n1*n2;
    double div=n1/n2;

    switch(operator){
        case '+':
        printf("The addition of %lf and %lf is %lf",n1,n2,add);
        break;

        case '-':
        printf("The subtraction of %lf with %lf is %lf",n1,n2,sub);
        break;

        case '*':
        printf("The multiplication of %lf and %lf is %lf",n1,n2,mul);
        break;

        case '/':
        printf("The division of %lf by %lf is %lf",n1,n2,div);
        break;

        default:
        printf("Invalid Input for operator");
      }
printf("Feature c branch change");
}
