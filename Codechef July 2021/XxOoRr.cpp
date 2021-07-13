/* Given an array A1,A2…AN, find the minimum number of operations (possibly zero) required to convert all integers in A to 0.
In one operation, you choose a non-negative integer p (p≥0),
select at most K indices in the array A, and
for each selected index i, replace Ai with Ai⊕2p. Here, ⊕ denotes bitwise XOR.*/
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int n, k;
	while(t--){
	    cin >> n >> k;
	    vector <int> a(n);
	    for(int& i:a){
	        cin >> i;
	    }
	    vector <int> sum(31);
	    int c;
	    for(int j=0; j<=30; j++){
	        c = 0;
	        for(int& i:a){
	            if(i%2 != 0){
	                c ++;
	            }
	            i /= 2;
	        }
	        sum[j] = c;
	    }
	    int ans = 0;
	    for(int j=0; j<30; j++){
	        if(sum[j]%k==0){
	            ans = ans + sum[j]/k;
	        } else{
	             ans = ans + sum[j]/k + 1;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}

