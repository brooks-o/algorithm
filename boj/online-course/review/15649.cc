#include <iostream>
using ll = long long;

using namespace std;

// 정답이 저장되는 배열
int res[10];
// 선택 여부 체크 배열
int check[10];

void go(int index, int &n, int &m)
{
    // m개를 모두 뽑은 경우 출력
    if (index == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << res[i];
            if (i != m - 1)
            {
                cout << ' ';
            }
        }
        cout << '\n';
        return;
    }

    // 다음 순열 탐색
    for (int i = 1; i <= n; i++)
    {
        // 선택했던 배열이면 넘어가고
        if (check[i]) continue;
        check[i] = true;
        // 정답을 넣고
        res[index] = i;
        // 다음 인덱스로 탐색
        go(index + 1, n, m);
        check[i] = false;
    }
}

int main()
{
    // 1부터 n까지의 수열을 나열한 뒤 m개 만큼 뽑음
    int n, m;
    cin >> n >> m;
    go(0, n, m);
    return 0;
}