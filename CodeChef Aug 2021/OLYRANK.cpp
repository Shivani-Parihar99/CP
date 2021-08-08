#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int g1, s1, b1, g2, s2, b2;
	while(t--){
	    cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
	    int a = g1 + s1 + b1;
	    int b = g2 + s2 + b2;
	    if(a > b){
	        cout << "1" << endl;
	    }
	    else if(a==b){
	        if(g1>g2){
	            cout << "1" << endl;
	        }
	        else if(g1==g2){
	            if(s1>s2){
	                cout << "1" << endl;
	            }
	            else if(s1==s2){
	                if(b1>b2){
	                    cout << "1" << endl;
	                }
	            }
	        }
	    }
	    else{
	        cout << "2" << endl;
	    }
	}
	return 0;
}
