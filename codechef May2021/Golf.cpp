#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int q;
	cin >> q;
	while(q--)
	{
		int n, x, k;
		cin >> n >> x >> k;
		n+=1;
		if(x % k == 0)
		{
		cout << "YES" <<"\n";
		}
	    else if((n-x) % k == 0)
		{
		cout << "YES" << "\n";
		}
		else
		{
		cout << "NO" << "\n";
		}
	}
	
	return 0;
}
