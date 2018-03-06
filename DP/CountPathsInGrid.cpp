#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
int numberOfPaths(int m, int n)
{
  int count[m][n];
  for(int i=0;i<m;i++)
  {
    count[i][0]=1;
  }
  for(int i=0;i<n;i++)
  {
    count[0][i]=1;
  }
  for(int i=1;i<m;i++)
  {
    for(int j=1;j<n;j++)
      count[i][j]=count[i-1][j]+count[i][j-1];
  }
  return count[m-1][n-1];
}
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  int m,n;
  cin>>m>>n;
  cout<<numberOfPaths(m, n)<<"\n";
  return 0;
}
