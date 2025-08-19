#include <iostream>
using namespace std;

int f(int y)
{
    if ((y == 0) || (y == 1))
    {
        return 1;
    }
    else
    {
        return y * f(y-1);
    }
}

int main()
{
    int x;
    cin >> x;
    cout << f(x) << endl;

return 0;
}
