#include <iostream>

using namespace std;

int main()
{
    int E, S, M;

    cin >> E >> S >> M;

    int e=1, s=1, m = 1;

    for (int i = 1;; i++)
    {

        if (e == E && s == S && m == M)
        {
            cout << i << '\n';
            break;
        }

        e += 1;
        s += 1;
        m += 1;

        if (e > 15)
        {
            e = 1;
        }

        if (s > 28)
        {
            s = 1;
        }

        if (m > 19)
        {
            m = 1;
        }
    }
    return 0;
}