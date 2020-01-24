#include <iostream>
using ll = long long;

using namespace std;

int a[10];

void go(int index, int n, int m)
{
    // m개를 모두 뽑은 경우
    if (index == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << a[i];
            if (i != m - 1)
            {
                cout << ' ';
            }
        }
        cout << '\n';
        return;
    }

    // 다음 경우 호출
    for (int i = 1; i <= n; i++)
    {
        // 같은 수를 여러번 골라도 되므로 15649 문제에서 check 배열 제거 (방문 체크 필요 없음)
        a[index] = i;
        go(index + 1, n, m);
    }
}

int main()
{
    // 조건
    // 1부터 N까지 자연수 중에서 M개를 고른 수열
    // "같은 수를 여러 번" 골라도 된다.
    int n, m;
    cin >> n >> m;
    // 0부터 탐색 시작
    go(0, n, m);
    return 0;
}