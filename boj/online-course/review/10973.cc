#include <iostream>
#include <algorithm>
#include <vector>

using ll = long long;

using namespace std;

int main()
{
    int n;
    cin >> n;

    // 0으로 초기화된 n개의 원소를 갖는 vecotr 생성
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (prev_permutation(a.begin(), a.end()))
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }
    }
    else
    {
        cout << -1;
    }
}