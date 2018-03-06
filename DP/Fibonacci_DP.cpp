#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define MAX 100005

using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll fib[MAX], n;
  cin>>n;
  fib[0]=0;
  fib[1]=1;
  for(ll i=2;i<=n;i++)
    fib[i]=fib[i-1]+fib[i-2];
  cout<<fib[n]<<"\n";
  return 0;
}
