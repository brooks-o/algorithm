#include <iostream>
using ll = long long;

using namespace std;

int d[1001];

int main()
{
    d[0] = 1;
    d[1] = 1;

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        // 점화식 d[i] = d[i-1] + d[i-2] + d[i-2]
        // 2x3을 2x5에 재사용 했을 경우 나머지 n-2 부분을 채울 수 있는 방법이
        // 2x2 블럭과 1x2 블럭 2개가 있으므로 2*d[i-2]
        d[i] = d[i - 1] + d[i - 2]*2;
        d[i] %= 10007;
    }

    cout << d[n] << '\n';
    return 0;
}