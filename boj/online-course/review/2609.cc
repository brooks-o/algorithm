#include <iostream>
using ll = long long;

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    int g = gcd(n, m);
    cout << g << '\n' << n * m / g << '\n';
    return 0;
}