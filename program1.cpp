#include<iostream>
using namespace std;
float f(float x) {
    return (x * x * x) - (4 * x) - 9.0;
}
void bisection(float a, float b) {
    if ((f(a) * f(b)) >= 0) {
        cout << "No solution lies between given a and b";
        return;

    }
    float c = a;
    while ((b - a) >= 0.01) {
        c = (a + b) * 1.0 / 2;

        if (f(c) == 0.0)
            break;
        else if (f(c) * f(a) < 0)
            b = c;
        else a = c;

    }
    cout << "root is:" << c;
    return;
}
int main() {
    float a = 2.0, b = 3.0;
    bisection(a, b);
    return 0;
}

