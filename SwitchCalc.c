#include <stdio.h>
int main()
{
    double a ,b;
    char c;

    printf("Enter first number: ");
    scanf("%lf",&a);

    fflush(stdin);
    printf("Enter Operator ( + , - , * , / ): ");
    scanf("%c",&c);

    printf("Enter Second number: ");
    scanf("%lf",&b);


    printf("\n");
    switch (c)
    {
    case '+':
        printf("Your answer is: ");
        printf("%.1lf + %.1lf = %.1lf",a ,b ,a+b);
        break;
    case '-':
        printf("Your answer is: ");
        printf("%.1lf - %.1lf = %.1lf",a ,b ,a-b);
        break;
    case '*':
        printf("Your answer is: ");
        printf("%.1lf * %.1lf = %.1lf",a ,b ,a*b);
        break;
    case '/':
        printf("Your answer is: ");
        printf("%.2lf / %.2lf = %.2lf",a ,b ,a/b);
        break;
    default:
        printf("Error! Enter a valid operand");
        break;
    }
    return 0;
}