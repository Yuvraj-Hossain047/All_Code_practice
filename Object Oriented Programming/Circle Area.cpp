#include <iostream>
using namespace std;

float calculateArea(float radius) {
    const float PI = 3.1416;
    return PI * radius * radius;
}

int main() {
    float radius;

    cout << "Enter radius: ";
    cin >> radius;

    float area = calculateArea(radius);

    cout << "Area of the circle: " << area << endl;

    return 0;
}
