/* You are the owner of a big company. You are so rich, that the government has allowed you to print as many notes as you want of any single value that you like.
You also have peculiar behavioral traits and you often do things that look weird to a third person.You have N employees, where the i-th employee has salary Ai.
You want to pay them using a denomination that you create. You are also eco-friendly and wish to save paper. So, you wish to pay them using as few notes as possible.
Find out the minimum number of notes required if you can alter the salary of at most one employee to any positive integer that you like, and choose the positive integer
value that each note is worth (called its denomination).Each employee must receive the exact value of his/her salary and no more. */

#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6;
int arr[N],f[N],b[N];

void gcdc( int n)
{
f[1]=arr[1]; b[n]=arr[n];
for(int i=n-1; i>0; i--)
{
b[i]= __gcd(b[i+1],arr[i]);
}
for(int i=2; i<n+1; i++)
{
f[i]= __gcd(f[i-1],arr[i]);
}
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int sum =0 ;
int ans =0;
for(int i=1; i<n+1; i++)
{
cin>>arr[i];
}
sort(arr,arr+n+1);
gcdc(n);
for(int i=1; i<n+1; i++)
{
sum +=arr[i];
}
int min = LLONG_MAX;
for(int i=1; i<n+1; i++)
{
ans = (sum-arr[i] + __gcd(f[i-1],b[i+1])) / __gcd(f[i-1],b[i+1]);
if(ans<min)
min = ans;
}
cout<<min<<endl;
}
return 0;
}
