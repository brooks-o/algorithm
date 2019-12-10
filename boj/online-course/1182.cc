#include <iostream>
#include <algorithm>
#include <vector>

using ll = long long;

using namespace std;

int a[20];
int n,m;
int ans = 0;

void solve(int index, int sum){
    if(index == n){
        if (sum == m)
        {
            ans += 1;
        }
        return;
    }
    solve(index+1, sum+a[index]);
    solve(index+1, sum);
}

int main()
{   
    cin >> n >> m;
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    solve(0,0);

    if (m==0) ans += -1;
    
    cout << ans << '\n';

    return 0;
}