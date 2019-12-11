#include <iostream>
#include <cstring>
using ll = long long;

using namespace std;

char b[111];
int main()
{
    int n = 20;
    int m;
    cin >> m;

    int s = 0;
    int x;

    while (m--)
    {
        scanf("%s", b);
        scanf("%d", &x);
        x--;

        if (!strcmp(b, "add"))
        {

            s = (s | (1 << x));
        }
        else if (!strcmp(b, "remove"))
        {
            s = (s & ~(1 << x));
        }
        else if (!strcmp(b, "check"))
        {
            int res = (s & (1 << x));
            if (res)
            {
                puts("1");
            }
            else
            {
                puts("0");
            }
        }
        else if (!strcmp(b, "toggle"))
        {
            s = (s ^ (1 << x));
        }
        else if (!strcmp(b, "all"))
        {
            s = (1 << n) - 1;
        }
        else if (!strcmp(b, "empty"))
        {
            s = 0;
        }
    }
    return 0;
}