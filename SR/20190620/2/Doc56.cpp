#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>    // std::max
using namespace std;
int c[100];
int d[100];
int e[100];

int main() {
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int w,n;
    while(cin>>w>>n) {
    	int i,j;
    	for(i=0;i<n;i++) 
			cin>>c[i]>>d[i];

	    memset(e,0,sizeof(e));
	    for (i=0;i<n;i++)
	    	for (j=c[i];j<=w;j++)
    			e[j]=max(e[j],e[j-c[i]]+d[i]);
	    int m=0;
	    for (i=0;i<=w;i++)
	    	if (e[i]>m)  m=e[i];
	    cout<<m<<endl;   	
    }

    return 0;
}



