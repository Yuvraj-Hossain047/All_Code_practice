#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);

    if((A+B>C)&&(A+C>B)&&(B+C>A))
    {
        printf("Perimetro = %.1f\n",A+B+C);
    }
    else{
        printf("Area = %.1f\n",((A+B)*C)*0.5);
    }
    return 0;
}
