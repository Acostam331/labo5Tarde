#include <iostream>
using namespace std;

int sumar(int, int);

int main()
{
    int m = 5, n = 10;

    cout << sumar(m, n);

    return 0;
}

int sumar(int m, int n)
{
    return m + n;
}