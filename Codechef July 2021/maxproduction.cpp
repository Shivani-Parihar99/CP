/*Chefland has 7 days in a week. Chef is very conscious about his work done during the week.
There are two ways he can spend his energy during the week. The first way is to do x units of work every day and the second way is to do y (>x) units of work for the
first d (<7) days and to do z (<x) units of work thereafter since he will get tired of working more in the initial few days.
Find the maximum amount of work he can do during the week if he is free to choose either of the two strategies.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int d,x,y,z;
	    cin>>d>>x>>y>>z;
	    cout << max((x*7),((y*d)+(z*(7-d))))<<endl;
	}
	return 0;
}

