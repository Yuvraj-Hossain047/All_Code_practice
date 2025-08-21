#include<iostream>
#include<stdio.h>
#define PI 3.1416
#define P printf
using namespace std;

int main()
{
    float radius,area;

    cout << "enter: ";
    cin >> radius;

    area = PI*radius*radius;

    P("%f\n",area);

    return 0;
}
