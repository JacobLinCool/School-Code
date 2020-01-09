#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        queue<int> q;
        for(int i = 1; i <= n; i++)
            q.push(i);
        while(q.size() > 1) {
            cout << q.front() << " ";
            q.pop();
            q.push(q.front());
            q.pop();
        }
        while(!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << "\n";
    }
}
