#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    while(cin >> n) {
        if(!n) break;
        while(true) {
            stack<int> s;
            int train[n];
            int tmp;
            cin >> tmp;
            if(tmp == 0) break;
            train[0] = tmp;
            for(int i = 1; i < n; i++) {
                cin >> tmp;
                train[i] = tmp;
            }
            int k = n;
            for(int i = n-1; i >= 0; i--) {
                s.push(train[i]);
                while(!s.empty()) {
                    if(s.top() != k) break;
                    s.pop();
                    k--;
                }
            }
            if(s.empty()) cout << "Yes\n";
            else cout << "No\n";
        }
        cout << "\n";
    }
    return 0;
}
