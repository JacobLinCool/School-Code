#include<bits/stdc++.h>
#define int long long
using namespace std;

vector<int> p[10];
int visited[10];

signed dfs(int n) {
    if(visited[n]) return 0;
    cout << n << "\n";
    visited[n] = true;
    if(p[n].size()) {
        for(int i = 0; i < p[n].size(); i++) {
            dfs(p[n][i]);
        }
    }
    return 0;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    while(cin >> a >> b) {
        p[a].push_back(b);
        p[b].push_back(a);
    }
    for(int i = 0; i < 10; i++) sort(p[i].begin(), p[i].end());
    dfs(0);
}
