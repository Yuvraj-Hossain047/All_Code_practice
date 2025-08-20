#include<stdio.h>
int main()
{
    char op;
    double x, y;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter two operands: ");
    scanf("%lf %lf", &x, &y);

    switch (op)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", x, y, x+y);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", x, y, x-y);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", x, y, x*y);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", x, y, x/y);
        break;

    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
