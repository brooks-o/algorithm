#include <iostream>
#include <algorithm>
#include <vector>

using ll = long long;

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // next_permutation(start, end): 배열 다음 순열 출력, 마지막이면 false 반환
    // 다음 순열이 있으면
    if (next_permutation(a.begin(), a.end()))
    {
        for (int i = 0; i < n; i++)
        {
            // 다음 순열을 출력
            cout << a[i] << ' ';
        }
    }
    // 마지막 순열이면
    else
    {
        // -1 출력 (문제 출력 조건)
        cout << -1;
    }
}