#include <iostream>
using namespace std;
#define M 1000000007

// Normal Method Complexity - O(n)
// Complexity - O(logn)
// Modular Exponention
long long int power(long long int A, long long int B)
{
    if (B == 0)
        return 1;

    else if (B % 2 == 0)
        return power((A*A) % M, B >> 1) % M;
    else
        return (A * power((A*A) % M, B >> 1) % M );
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long int n, m, x, c, e;
	    cin >> n >> m;
	    c = power(2,n);
	    x = (c - 1);
	    e = power(x,m);
	    cout << e <<endl;
	}
	return 0;
}


