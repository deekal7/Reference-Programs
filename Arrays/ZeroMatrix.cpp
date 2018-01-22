#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
void set_zeros(ll *a, ll m, ll n)
{
  ll row=0,col=0;
  rep(i,0,m)
  {
    rep(j,0,n)
    {
      if(a[i*n+j]==0)
      {
        row |= (1<<i);
        col |= (1<<j);
      }
    }
  }
  rep(i,0,m)
  {
    rep(j,0,n)
    {
      if((row & (1<<i))||(col & (1<<j)))
        a[i*n+j]=0;
    }
  }
}
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n,m;
  cin>>m>>n;
  ll a[m][n];
  rep(i,0,m)
  {
    rep(j,0,n)
    {
      cin>>a[i][j];
    }
  }
  ll *mat = (ll *)a;
  set_zeros(mat, m, n);
  rep(i,0,m)
  {
    rep(j,0,n)
    {
      cout<<a[i][j]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
