#include<stdio.h>
int main()
{
    double x;
    int N,a,b,c,d,e,f,g,h,i,j,k,l;
    scanf("%lf",&x);
    N=x*100;

    a=N/10000; N=N%10000;
    b=N/5000;  N=N%5000;
    c=N/2000;  N=N%2000;
    d=N/1000;  N=N%1000;
    e=N/500;   N=N%500;
    f=N/200;   N=N%200;
    g=N/100;   N=N%100;
    h=N/50;    N=N%50;
    i=N/25;    N=N%25;
    j=N/10;    N=N%10;
    k=N/5;     N=N%5;
    l=N/1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    printf("%d nota(s) de R$ 50.00\n",b);
    printf("%d nota(s) de R$ 20.00\n",c);
    printf("%d nota(s) de R$ 10.00\n",d);
    printf("%d nota(s) de R$ 5.00\n",e);
    printf("%d nota(s) de R$ 2.00\n",f);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",g);
    printf("%d moeda(s) de R$ 0.50\n",h);
    printf("%d moeda(s) de R$ 0.25\n",i);
    printf("%d moeda(s) de R$ 0.10\n",j);
    printf("%d moeda(s) de R$ 0.05\n",k);
    printf("%d moeda(s) de R$ 0.01\n",l);

    return 0;
}
