#include <iostream>
using ll = long long;

using namespace std;

bool prime(int x)
{
    if (x < 2)
        return false;

    for (int i = 2; i < x - 1; i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    while (n--)
    {
        int a;
        cin >> a;

        if (prime(a))
        {
            sum += 1;
        }
    }
    cout << sum << '\n';
}