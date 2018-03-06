#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
int minJumps(int a[], int n)
{
  if(n==0||a[0]==0)
    return INT_MAX;
  int count[n];
  count[0]=0;
  for(int i=1;i<n;i++)
  {
    count[i]=INT_MAX;
    for(int j=0;j<i;j++)
    {
      if(i<=j+a[j] && a[j]!=INT_MAX)
        count[i]=min(count[i], count[j]+1);
    }
  }
  return count[n-1];
}
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  ll n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<minJumps(a,n)<<"\n";
  return 0;
}
