/* Chef and his friend Bharat have decided to play the game "The Chefora Spell".

In the game, a positive integer N (in decimal system) is considered a "Chefora" if the number of digits d is odd and it satisfies the equation
N=∑i=0d−1Ni⋅10i,
where Ni is the i-th digit of N from the left in 0-based indexing.

Let Ai denote the i-th smallest Chefora number.

They'll ask each other Q questions, where each question contains two integers L and R. The opponent then has to answer with

(∏i=L+1R(AL)Ai)mod109+7.
Bharat has answered all the questions right, and now it is Chef's turn. But since Chef fears that he could get some questions wrong, you have come to his rescue!*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll power(ll bs, ll pw){
    ll res=1;
    while(pw!=0){
        if(pw%2==0){
            bs=((bs%mod)*(bs%mod))%mod;
            pw=floor(pw/2);
        }
        else{
            res=((res%mod)*(bs%mod))%mod;
            pw=pw-1;
        }
    }
    return res;
}

ll chefona(ll num){
    ll chefnum=num;
    ll retnum=0;
    if(num<10){
        retnum=chefnum;
    }
    else if(num>=10){
        num=num/10;
        while(num!=0){
            chefnum=chefnum*10+num%10;
            num=num/10;
        }
        retnum=chefnum;
    }
    return retnum;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a[100001]={0};
    ll prearray[100001]={0};
    for(ll i=1;i<=100001;i++){
        a[i]=chefona(i);
        prearray[i]=prearray[i-1]+a[i];
    }
    ll q;
    cin>>q;
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll diff=prearray[r]-prearray[l];
        cout<<power(a[l],diff)<<"\n";
        
    }
    return 0;
}
