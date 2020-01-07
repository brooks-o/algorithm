#include <iostream>
#include <algorithm>
#include <vector>

using ll = long long;

using namespace std;

int main()
{
    while (true)
    {
        // 총 원소의 갯수
        int k;
        cin >> k;
        
        // 입력의 마지막 줄은 0이 주어짐 (종료의 의미)
        if (k == 0)
            break;

        // 원소의 갯수만큼 오름 차순의 원소를 입력 받음
        vector<int> s(k);
        for (int i = 0; i < k; i++)
        {
            cin >> s[i];
        }
        
        // k-6개 만큼 0을 넣고
        vector<int> c;
        for (int i = 0; i < k - 6; i++)
        {
            c.push_back(0);
        }

        // 6개 만큼 1을 넣고 다음 순열 조회시 모든 조합을 구할 수 있음
        for (int i = 0; i < 6; i++)
        {
            c.push_back(1);
        }

        // 결과
        vector<vector<int>> ans;
        do
        {
            vector<int> current;
            for (int i = 0; i < k; i++)
            {
                if (c[i] == 1)
                {
                    // 2. 현재의 숫자를 선택 했으면 (즉, c[i] == 1이면) 삽입
                    current.push_back(s[i]);
                }
            }
            ans.push_back(current);
        // 1. 다음 순열을 돌면서
        // 예 ) 0 0 1 1 1 1 1 1 순열의 다음  순열을 찾으며 반복
        } while (next_permutation(c.begin(), c.end()));

        // 사전 순으로 출력 (출력 조건)
        sort(ans.begin(), ans.end());

        for (auto &v : ans)
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << ' ';
            }

            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}