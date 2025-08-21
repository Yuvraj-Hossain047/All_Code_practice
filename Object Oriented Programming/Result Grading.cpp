#include<iostream>
using namespace std;

int main()
{
    int marks;
        while(1)
    {
    cout << "Enter your Marks: ";
    cin >> marks;

        if(marks > 100 || marks < 0)
            cout<<("You entered  invalid marks.\n");
        else if(marks >= 80)
            cout<<("A+\n");
        else if(marks >= 70)
            cout<<("A\n");
        else if(marks >= 60)
            cout<<("A-\n");
        else if(marks >= 50)
            cout<<("B\n");
        else if(marks >= 40)
            cout<<("C\n");
        else if(marks >= 33)
            cout<<("D\n");
        else
            cout<<("F\n");
    }

    return 0;
}
