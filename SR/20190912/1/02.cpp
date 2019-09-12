#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> p[10];
    bool c[10];
    int a, b;
    while(cin >> a >> b) {
        p[a].push_back(b);
        p[b].push_back(a);
    }
    for(int i = 0; i < 10; i++) sort(p[i].begin(), p[i].end());
    queue<int> q;
    q.push(0);
    cout << "0\n";
    c[0] = true;
    while(true) {
        for(int i = 0; i < p[q.front()].size(); i++) {
            if(!c[p[q.front()][i]]) {
                cout << p[q.front()][i] << "\n";
                q.push(p[q.front()][i]);
                c[p[q.front()][i]] = !false;
            }
        }
        q.pop();
        if(q.empty()) break;
    }
}
