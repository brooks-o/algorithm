#include <iostream>
#include <algorithm>
#include <vector>

using ll = long long;

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a;

    for (int i = 1; i <= n; i++)
    {
        a.push_back(i);
    }

    // next_permutation(a.begin(), a.end())은 다음 순열을 만드므로 while이 아닌 do-while을 사용해야함
    do
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }

        cout << '\n';
    } while (next_permutation(a.begin(), a.end()));
}