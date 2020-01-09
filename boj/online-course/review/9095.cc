#include <iostream>
using ll = long long;

using namespace std;

int go(int sum, int goal)
{
    // 1. 불가능한 경우
    if (sum > goal) return 0;
    // 2. 정답을 찾은 경우
    if (sum == goal) return 1;

    // 3. 다음을 호출하는 경우
    // (1씩 증가하면서 1을 사용할때, 2를 사용할때, 3을 사용할때 각가을 구함)
    int now = 0;
    for (int i = 1; i <=3; i++)
    {
        now += go(sum+i, goal);
    }
    return now;
}   

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        // 결과를 바로 리턴
        cout << go(0,n) << '\n';
    }

    return 0;
}