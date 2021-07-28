#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void compareNumber(double x, double y)
{

    if (abs(x - y) < 1e-9)
    {
        cout << "abs value of x: " << abs(x) << "abs value of y: " << abs(y);
        cout << "abs value of x-y" << abs(x - y) << "abs value of y-x" <<abs(y-x);
        cout << "the two numbers are equal " << endl;
    }
    else
    {
        cout << "the two numbers are not equal" << endl;
    }
}

int main()
{
    double a = (0.3 * 3) + 0.1;
    double b = 1;
    cout << "the value of two inputs before a : " << a << "b: " << b;
    compareNumber(a, b);
}
