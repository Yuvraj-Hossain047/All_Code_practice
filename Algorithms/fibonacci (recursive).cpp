#include <iostream>
using namespace std;

int f(int x)
{
    if (x == 1)
    {
        return 0;
    }
    else if (x == 2)
    {
        return 1;
    }
    else
    {
        return f(x - 1) + f(x - 2);
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        if (i > 1)
        {
            cout << " ";
        }
       cout <<  f(i);
    }

    return 0;
}
