#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--){
	    ll n, p, k;
	    cin >> n >> p >> k;
	    ll ans;
	    ll q = p%k;
	    if(n%k <= q-1){
	        ans = (n%k)*(n/k+1)+(q-n%k)*(n/k) + (p/k+1);
	    }
	    else{
	        ans = q*(n/k+1)+(p/k+1);
	    }
	    cout << ans << endl;
	}
	return 0;
}

