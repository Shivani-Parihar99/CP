#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b, A, B;
	    cin >> a >> b >> A >> B;
	    int x = A/a;
	    int y = B/b;
	    cout << x+y <<endl;
	}
		return 0;
}
