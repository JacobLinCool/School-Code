#include <iostream>
using namespace std;

void LIS(int X[], int n) {

 int P[n];
 int M[n+1];

 int L = 0;
 for(int i = 0; i < n; i++) {
   int lo = 1;
   int hi = L;
   while(lo <= hi) {
     int mid = int((lo+hi)/2);
     if(X[M[mid]] <= X[i]) 
       lo = mid+1;
     else
       hi = mid-1;
   }
   int newL = lo;
   P[i] = M[newL-1];
   M[newL] = i;

   if(newL > L) {
     L = newL;
   }
 }
 int S[L];
 int k = M[L];
 for(int i = L-1; i >=0; i--) {
   S[i] = X[k];
   k = P[k];
 }
 for(int i = L-1; i >= 0; i--)
 cout << S[i];
 cout << endl;
}

int main() {
	int n;
	while(cin >> n) {
		int s[n];
		for(int i = 0; i < n; i++) {
			cin >> s[i];
		}
		LIS(s, n);
	}
}
