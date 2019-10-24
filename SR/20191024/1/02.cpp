#include<bits/stdc++.h>
#define int long long
#define pascal signed
using namespace std;

bool pr(int x, int o[], int n, int m){
    int ans = 1, sum = 0;
    for(int i = 0; i < n; i++){
        sum += o[i];
        if(sum > x) sum = o[i], ans++;
    }
    if(ans > m) return true;
    else return false;
}

pascal main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int q;
    while(cin >> q)
        for(int w = 0; w < q; w++) {
            int n, m;
            cin >> n >> m;
            int o[n], x, minn = 0, maxn = 10000;
            for(int i = 0; i < n; i++)
                cin >> o[i], minn = 0 > o[i] ? 0 : o[i]; // check if any of o < 0

            while(minn < maxn){
                x = ( maxn + minn ) / 2;
                if(pr(x,o,n,m)) minn = x + 1;
                else maxn = x;
            }
            cout << minn << "\n";
        }
}
