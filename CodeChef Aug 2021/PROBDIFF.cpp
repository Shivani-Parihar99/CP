/* You have prepared four problems. The difficulty levels of the problems are A1,A2,A3,A4 respectively.
A problem set comprises at least two problems and no two problems in a problem set should have the same difficulty level.
A problem can belong to at most one problem set. Output the maximum number of problem sets you can create using the four problems.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int x1, x2, x3, x4;
	while(t--){
	    cin >> x1 >> x2 >> x3 >> x4;
	if((x1==x2) && (x2==x3) &&(x3==x4)){
	    cout << "0" << endl;
	}
	else if((x1==x2)&&(x2==x3)||(x2==x3)&&(x3==x4)||(x1==x2)&&(x2==x4)||(x1==x3)&&(x3==x4)){
	    cout << "1" <<endl;
	}
	
	else{
	    cout << "2" << endl;
	}
}
	return 0;
}

