#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
ll uniqueRecycledPairs(vector<ll> a) {
    unordered_map<string,vector<ll>> m;
    ll count=0;
    ll n=a.size();
    for(ll i=0;i<n;i++)
    {
      string tmp=to_string(a[i]);
      sort(tmp.begin(),tmp.end());
      m[tmp].push_back(a[i]);
    }
    for(auto x:m)
      count+=(x.second.size()/2);
    return count;
}
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,tmp;
  cin>>n;
  vector<ll> a;
  rep(i,0,n)
  {
    cin>>tmp;
    a.push_back(tmp);
  }
  cout<<uniqueRecycledPairs(a)<<"\n";
  return 0;
}
