#include <bits/stdc++.h>
#define int long long
using namespace std;

int w[999][999], d[999][999];

signed Rebuild(int point) {
    for(int k = 0; k < point; k++)
        for(int i = 0; i < point; i++)
            for(int j = 0; j < point; j++)
                if(d[i][k] + d[k][j] < d[i][j])
                    d[i][j] = d[i][k] + d[k][j];
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int point, line;
    while(cin >> point >> line) {
        for(int i = 0; i < point; i++)
            for(int j = 0; j < point; j++)
                w[i][j] = 99999, d[i][j] = 99999;
        for(int i = 0; i < line; i++) {
            int tmp1, tmp2, tmp3;
            cin >> tmp1 >> tmp2 >> tmp3;
            w[tmp1 - 1][tmp2 - 1] = tmp3;
            w[tmp2 - 1][tmp1 - 1] = tmp3;
            d[tmp1 - 1][tmp2 - 1] = tmp3;
            d[tmp2 - 1][tmp1 - 1] = tmp3;
        }
        for(int i = 0; i < point; i++)
            d[i][i] = 0;
        Rebuild(point);

        for(int i = 0; i < point; i++) {
            for(int j = 0; j < point; j++) {
                cout << "\t" << d[i][j];
            }
            cout << "\n";
        }
    }
}
