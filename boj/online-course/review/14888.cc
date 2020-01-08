#include <iostream>
#include <algorithm>
#include <vector>

using ll = long long;

using namespace std;

// 연산에 따라 계산
// 0 = 덧셈, 1 = 뺄셈, 2 = 곱셈, 3 = 나눗셈
int calc(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int sum = a[0];
    for (int i = 1; i < n; i++)
    {
        if (b[i-1] == 0)
        {
            sum += a[i];
        }
        else if (b[i-1] == 1)
        {
            sum -= a[i];
        }
        else if (b[i-1] == 2)
        {
            sum *= a[i];
        }
        else
        {
            sum /= a[i];
        }
    }

    return sum;
}

int main()
{
    // 원소의 갯수
    int n;
    cin >> n;

    // 원소 입력 받음
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // 연산의 갯수 입력 받음
    vector<int> b;
    for (int i = 0; i < 4; i++)
    {
        int cnt;
        cin >> cnt;
        for (int j = 0; j < cnt; j++)
        {
            b.push_back(i);
        }
    }
    
    vector<int> r;
    do
    {
        // 2. 연산의 결과를 받고
        int temp = calc(a, b);
        // 3. 결과 벡터에 push
        r.push_back(temp);
    // 1. 다음 순열을 만들면서
    } while (next_permutation(b.begin(), b.end()));

    // 결과 벡터에서 최솟값과 최댓값 추출
    // minmax_element : min_element와 max_element를 합친 함수
    auto ans = minmax_element(r.begin(), r.end());

    // 최댓값 출력
    cout << *ans.second << '\n';
    // 최솟값 출력
    cout << *ans.first << '\n';
    return 0;
}