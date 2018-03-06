#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
int chainOrder(int p[], int n)
{
  int m[n][n];
  int q;
  for(int i=1;i<n;i++)
    m[i][i]=0;
  for(int l=2;l<n;l++)
  {
    for(int i=1;i<n-l+1;i++)
    {
      int j=i+l-1;
      m[i][j]=INT_MAX;
      for(int k=i;k<j;k++)
      {
        q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
        m[i][j]=min(m[i][j],q);
      }
    }
  }
  return m[1][n-1];
}
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  int n;
  cin>>n;
  int p[n];
  for(int i=0;i<n;i++)
    cin>>p[i];
  cout<<chainOrder(p,n)<<"\n";
  return 0;
}
