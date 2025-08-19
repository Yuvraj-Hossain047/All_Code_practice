#include<iostream>
#include<cmath>
using namespace std;
double f(double x)
{
    return x*x*x - x - 1;
}
int main()
{
    int n=5;
    double x0,x1=1, x2=2, fx0,fx1,fx2;
    const double E = 0.0001;

    fx1= f(x1);
    fx2= f(x2);
    if(fx1*fx2>0)
    {
        cout<<"no root"<<endl;
        return 1;
    }

    for(int i=0; i<n; i++)
    {
        x0= (x1+x2)/2;
        fx0=f(x0);

        cout<< "Iteration-"<<i+1<<endl;
        cout<< x1<<endl;
        cout<< x2<<endl;

        if(fx0==0 || abs(fx0)<E)
        {
            break;
        }
        else if(fx1*fx0<0)
        {
            x2=x0;
            fx2=fx0;
        }
        else
        {
            x1=x0;
            fx1=fx0;
        }
    }
    return 0;
}
