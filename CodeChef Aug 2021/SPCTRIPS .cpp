
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int cnt = 0;
	    for(int c=1; c<=n; c++){
	        for(int b=2*c; b<=n; b+=c){
	            cnt += ((n-c)/b) + 1;
	        }
	    }
	    
	    cout << cnt << endl;
	}
	return 0;
}
