#include <iostream>
using ll = long long;

using namespace std;

int d[1001];

int main()
{
    // 아무것도 넣지 않는 방법 1
    d[0] = 1;
    // 2x1 타일 하나 넣는 방법 1
    d[1] = 1;
    int n;
    cin >> n;
    
    for (int i = 2; i <= n; i++)
    {
        // 점화식 d[i] = d[i-1] + d[i-2]
        d[i] = d[i-1] + d[i-2];
        // 출력 조건 
        // 첫째 줄에 2×n 크기의 직사각형을 채우는 방법의 수를 10,007로 나눈 나머지를 출력한다.
        d[i] %= 10007;
    }

    cout << d[n] << '\n';

    return 0;
}