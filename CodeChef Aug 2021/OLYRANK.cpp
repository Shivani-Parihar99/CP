/* In Olympics, the countries are ranked by the total number of medals won. You are given six integers  G1 , S1, B1, and G2, S2, B2, the number of
gold, silver and bronze medals won by two different counties respectively. Determine which country is ranked better on the leaderboard. 
It is guaranteed that there will not be a tie between the two countries.*/


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
