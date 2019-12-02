#include <iostream>

using namespace std;

int gcd(int x, int y) {

    if (y == 0) return x;
    else return gcd(y, x%y);

}

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int a[111];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        long long sum=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int g = gcd(a[i],a[j]);
                sum += g;
            }
        }

        cout << sum << '\n';
    }
    
    return 0;
}