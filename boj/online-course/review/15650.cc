#include <iostream>
using ll = long long;

using namespace std;

// 결과를 저장하는 배열
int res[10];

// index = 사용할지 말지 사용하는 변수, selected = 몇개를 골랐는지 세는 변수
void go(int index, int selected, int &n, int &m)
{
    // 모두 골랐으면 출력
    if (selected == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << res[i] << ' ';
        }
        cout << '\n';
        return;
    }

    // 1씩 증가하는 index가 총 원소의 갯수를 넘으면 return;
    if (index > n)
        return;

    // 다음 수를 고르기 위해 index + 1, 고른 수 + 1
    res[selected] = index;
    go(index + 1, selected + 1, n, m);
    // 고르지 않았다면 0 대입 후 다음 탐색
    res[selected] = 0;
    go(index + 1, selected, n, m);
}

int main()
{
    int n, m;
    cin >> n >> m;
    go(1, 0, n, m);
    return 0;
}