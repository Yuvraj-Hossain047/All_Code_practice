#include<stdio.h>
int main()
{
    int N,a,b,c,d,e,f,g;
    scanf("%d",&N);
    printf("%d\n",N);

    a=N/100; N=N%100;
    b=N/50;  N=N%50;
    c=N/20;  N=N%20;
    d=N/10;  N=N%10;
    e=N/5;   N=N%5;
    f=N/2;   N=N%2;
    g=N/1;

    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",a,b,c,d,e,f,g);


    return 0;
}
