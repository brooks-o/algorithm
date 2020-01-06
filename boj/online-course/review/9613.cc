#include <iostream>
using ll = long long;

using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

int main()
{   
    // 테스트 케이스의 개수 t
    int t;
    cin >> t;

    while (t--)
    {
        // 각 테스트 케이스 수의 개수 n
        int n;
        cin >> n;

        // n개 만큼의 수
        int a[101];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }4

        

        ll sum = 0;

        // 가능한 모든 쌍의 GCD의 합
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                sum += gcd(a[i], a[j]);
            }
        }

        cout << sum << '\n';
    }
}