#include <iostream>
using ll = long long;

using namespace std;

// 모두 0으로 초기화 됨
// 그때의 값이 저장되는 배열
int d[1000001];

int solve(int x)
{
    if (x == 1)
    {
        return 0;
    }

    // 메모이제이션
    // 처음 배열은 0으로 초기화 되어 있으므로
    // 배열 > 0 이면 값이 들어가 있다는 의미
    if (d[x] > 0)
    {
        return d[x];
    }

    // X-1
    d[x] = solve(x - 1) + 1;

    // x % 3 == 0
    if (x % 3 == 0)
    {
        int temp = solve(x / 3) + 1;
        if (d[x] > temp)
        {
            d[x] = temp;
        }
    }

    // x % 2 == 0
    if (x % 2 == 0)
    {
        int temp = solve(x / 2) + 1;
        if (d[x] > temp)
        {
            d[x] = temp;
        }
    }

    return d[x];
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n) << '\n';
    return 0;
}