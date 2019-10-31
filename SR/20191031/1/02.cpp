#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    while(cin >> n >> k) {
        vector<int> p(n);
        for(int i = 0; i < n; i++)
            cin >> p[i];
        sort(p.begin(), p.end());
        int r = (p[n-1]+1)/2;
        while(true) {
            int nr = r - 1;
            int pos = p[0];
            for(int i = 0; i < k; i++) {
                int t = upper_bound(p.begin(), p.end(), pos + 2*nr) - p.begin();
                if(t == n) {pos = 10e8; break;}
                else pos = p[t];
            }
            if(pos > p[n-1]) r--;
            else break;
        }
        cout << 2*r-1 << "\n";
    }

    return 0;
}
