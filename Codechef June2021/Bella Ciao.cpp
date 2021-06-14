#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long D, d, p, q, n, a;
	    cin >> D >> d >> p >> q;
	    n = D/d;
	    if(D%d == 0){
	        a = p*n*d + q*((n*(n-1)/2))*d;
	          cout<< a <<endl;
	    } else{
	        a = p*n*d + q*((n*(n-1)/2))*d;
	        a += (D%d)*(p+n*q);
	          cout<< a <<endl;
	    }
	}
	return 0;
}
