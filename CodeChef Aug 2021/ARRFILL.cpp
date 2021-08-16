

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>> n >>m;
        vector <pair<int,int>>ap;
        for(int i=0;i<m;i++)
        {
            ll x,y;
            cin>> x >> y;
            ap.push_back({x,y});
        }
        sort(ap.begin(),ap.end(),greater<pair<int,int>>());
        
        ll lcm=1; ll rm=n;  ll res =0;
    
        for(int i =0; i< m && rm>0; i++){
        ll a=ap[i].first, b=ap[i].second;
        lcm = lcm*b/__gcd(lcm,b);
        res+=(rm-n/lcm)*a;
        rm=n/lcm;
        }
        cout<< res<< endl;
        
    }
    return 0;
}
