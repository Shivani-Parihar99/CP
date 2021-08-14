/* Chef is trying to invent the light bulb that can run at room temperature without electricity. So he has N gases numbered from 0 to N−1 that he can use and he doesn't
know which one of the N gases will work but we do know it.Now Chef has worked on multiple search algorithms to optimize search. For this project,
he uses a modulo-based search algorithm that he invented himself. So first he chooses an integer K and selects all indices i in increasing order 
such that imodK=0 and test the gases on such indices, then all indices i in increasing order such that imodK=1, and test the gases on such indices, and so on.
Given N, the index of the gas p that will work, and K, find after how much time will he be able to give Chefland a new invention assuming that testing 1 gas takes 1 day.

For example, consider N=5,p=2 and K=3.

On the 1st day, Chef tests gas numbered 0 because 0mod3=0.
On the 2nd day, Chef tests gas numbered 3 because 3mod3=0.
On the 3rd day, Chef tests gas numbered 1 because 1mod3=1.
On the 4th day, Chef tests gas numbered 4 because 4mod3=1.
On the 5th day, Chef tests gas numbered 2 because 2mod3=2.
So after 5 days, Chef will be able to give Chefland a new invention*/





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

