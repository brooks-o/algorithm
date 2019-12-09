#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using ll = long long;

using namespace std;

bool check(string &password)
{
    int ja = 0;
    int mo = 0;

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
    if (password.length() == n)
    {
        if (check(password))
        {
            cout << password << '\n';
        }
        return;
    }

    if (i == alpha.size())
        return;

    go(n, alpha, password+alpha[i], i+1);
    go(n, alpha, password, i+1);
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