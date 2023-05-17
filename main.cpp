#include <iostream>
using namespace std;

int mult(int, int);

int main()
{
    int m = 5, n = 10;

    cout << mult(m, n);

    return 0;
}

int mult(int m, int n)
{
    return m * n;
}