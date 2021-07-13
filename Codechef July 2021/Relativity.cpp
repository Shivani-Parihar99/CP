/* In Chefland, the speed of light is c m/s, and acceleration due to gravity is g m/s2.
Find the smallest height (in meters) from which Chef should jump such that during his journey down only under the effect of gravity and independent of any air resistance,
he achieves the speed of light and verifies Einstein's theory of special relativity. Assume he jumps at zero velocity and at any time, his velocity (v) and depth of
descent (H) are related as v2=2⋅g⋅H.*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int g, c;
	    cin >> g >> c;
	    c = c*c;
	    g = g*2;
	    cout << c/g << endl;
	}
	return 0;
}
