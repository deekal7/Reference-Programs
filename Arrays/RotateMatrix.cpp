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
  ll a[n][n];
  rep(i,0,n)
  {
    rep(j,0,n)
    {
      cin>>a[i][j];
    }
  }
  for(ll layer = 0;layer<n/2;layer++)
  {
    ll first = layer;
    ll last = n-1-layer;
    for(ll i=first;i<last;i++)
    {
      ll offset = i - first;
      ll temp = a[first][i];
      //left->top
      a[first][i] = a[last-offset][first];
      //bottom->left
      a[last-offset][first] = a[last][last-offset];
      //right->bottom
      a[last][last-offset] = a[i][last];
      //top->right
      a[i][last] = temp;
    }
  }
  rep(i,0,n)
  {
    rep(j,0,n)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
