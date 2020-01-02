#include <iostream>
using ll = long long;

using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}

int main()
{
    // 테스트 케이스의 개수
    int t;
    cin >> t;

    int a, b;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        int g = gcd(a, b);
        cout << a * b / g << '\n';
    }
    return 0;
}