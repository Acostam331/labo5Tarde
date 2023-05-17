#include <iostream>
using namespace std;

int restar(int, int);

int main()
{
    int m = 5, n = 15;

    cout << "El resultado de tu resta es: " << restar(m, n);
    
    return 0;
}

int restar(int m, int n)
{
    return m - n;
}