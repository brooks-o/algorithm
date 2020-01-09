#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using ll = long long;

using namespace std;

// 조건을 충족하는지 확인
// 조건 : 최소 한 개의 모음과 최소 두 개의 자음으로 구성
bool check(string &password)
{
    int ja=0;
    int mo=0;

    for (char c : password)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            mo += 1;
        }
        else
        {
            ja += 1;
        }
    }

    return ja >= 2 && mo >= 1;
}

void go(int n, vector<char> &alpha, string password, int i)
{

    // 정답을 찾은 경우
    // 비밀번호의 길이가 n개의 문자열인지
    if (password.size() == n)
    {
        if (check(password))
        {
            cout << password << '\n';
        }

        return;
    }

    // 불가능한 경우
    if (i == alpha.size())
        return;

    // 다음 경우
    // i번째 알파벳을 사용하는 경우
    go(n, alpha, password + alpha[i], i + 1);
    // i번째 알파벳을 사용하지 않는 경우
    go(n, alpha, password, i + 1);
}

int main()
{
    int l, c;
    cin >> l >> c;

    vector<char> a(c);
    for (int i = 0; i < c; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    go(l, a, "", 0);
    return 0;
}