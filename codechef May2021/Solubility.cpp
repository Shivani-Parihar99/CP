#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	int X, A, B, s;
	for (int i=0; i<T; i++){
	    cin >> X >> A >> B;
	   if((31<=X<=40) && (101<=A<=120) && (1<=B<=5)){
	        s = (A + (100-X)*B)*10;
	        cout << s << endl;
	   }
	}
	return 0;
}
