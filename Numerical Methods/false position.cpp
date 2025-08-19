#include <iostream>
#include <cmath>
using namespace std;
double f(double x)
{
    return x * x * x  -x - 1;
}

int main()
{
    int n;
    double x1, x2, x0, fx1, fx2, fx0;
    const double E = 0.0001;

    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "How many iterations?" << endl;
    cin >> n;

    fx1 = f(x1);
    fx2 = f(x2);

    if (fx1 * fx2 > 0)
    {
        cout << "x1 and x2 do not bracket any root!" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        x0 = x1 - (((fx1)*(x2-x1))/(fx2 - fx1));
        fx0 = f(x0);

        cout << "Iteration: " << i + 1 << endl;
        cout << endl;
        cout << "x1: " << x1 << " f(x1): " << fx1 << endl;
        cout << "x2: " << x2 << " f(x2): " << fx2 << endl;
        cout << endl;
        cout << "Thus, x0: " << x0 << " f(x0): " << fx0 << endl;
        cout << endl;

        if ((fx0 == 0) || (abs(fx0) < E))
        {
            break;
        }
        if (fx1 * fx0 < 0)
        {
            x2 = x0;
            fx2 = fx0;
        }
        else
        {
            x1 = x0;
            fx1 = fx0;
        }
    }

    return 0;
}
