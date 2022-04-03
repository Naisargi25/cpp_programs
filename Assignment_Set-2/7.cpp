#include <iostream>

using namespace std;

int gcd(int a, int b)
{

    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int main()
{
    int length, width, result, fa;
    cout << "Enter length of chocolate bar: ";
    cin >> length;
    cout << "Enter width of chocolate bar: ";
    cin >> width;

    fa = gcd(length, width);
    result = (length * width) / (fa * fa);
    cout << "The minimum possible number of square pieces of chocolate bar is: " << result << endl;

    return 0;
}
