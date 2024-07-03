#include<stdio.h>
int main()
{
    int x;
    double y,p;
    scanf("%d %lf",&x,&y);

    switch(x)
    {
    case 1: printf("Total: R$ %.2f\n",y*4.00);
    break;
    case 2: printf("Total: R$ %.2f\n",y*4.50);
    break;
    case 3: printf("Total: R$ %.2f\n",y*5.00);
    break;
    case 4: printf("Total: R$ %.2f\n",y*2.00);
    break;
    case 5: printf("Total: R$ %.2f\n",y*1.50);
    break;
    default: printf("Invalid");
    }
    return 0;
}
