#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  ll steps[100005];
  steps[0]=0,steps[1]=1,steps[2]=2,steps[3]=4;
  rep(i,4,n+1)
  {
    steps[i] = steps[n-1]+steps[n-2]+steps[n-3];
  }
  cout<<steps[n]<<"\n";
  return 0;
}
