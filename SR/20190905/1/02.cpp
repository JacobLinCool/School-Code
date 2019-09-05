#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    while(cin >> t) {
        int n;
        while(t--) {
            cin >> n;
            int sum = 1;
            for(int i = 2; i <= n/2; i++) {
                if(n%i==0) sum += i;
            }
            if(n == sum) cout << "perfect\n";
            else if(n > sum) cout << "deficient\n";
            else cout << "abundant\n";
        }
    }
}
