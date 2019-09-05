#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    while(cin >> a >> b) {
        int w[b], p[b];
        for(int i = 0; i < b; i++) cin >> w[i] >> p[i];
        int dp[a+1] = {0}, use[b] = {0};

        for(int i = 1; i <= b; i++) {
            for(int j = a; j >= w[i]; j--) {
                int t = dp[j];
                dp[j] = max(dp[j], dp[j-w[i]]+p[i]);
                if(dp[j] != t) use[i] = 1;
            }
        }
        cout << dp[a] << "\n";
        for(int i = b-1; i >= 0; i--)
            if(use[i]) cout << i << " ";
        cout << "\n";
    }
}
