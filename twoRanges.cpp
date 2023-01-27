#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int num[4], n_min=INT_MAX, n_max=INT_MIN;
	    for(int i = 0; i<4; i++) {
	        cin>>num[i];
	        n_min = min(n_min,num[i]);
	        n_max = max(n_max, num[i]);
	    }
	    if(num[1]>=num[2] && num[0]<=num[3]) cout<<n_max-n_min+1<<endl;
	    else cout<<num[1]+num[3]-num[0]-num[2]+2<<endl;
	}
	return 0;
}
