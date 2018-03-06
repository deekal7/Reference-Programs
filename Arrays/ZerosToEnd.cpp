#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
  //code
  ll t;
  cin>>t;
  while(t--)
  {
      ll n;
      cin>>n;
      ll a[n];
      for(ll i=0;i<n;i++)
          cin>>a[i];
      ll count=0;
      for(ll i=0;i<n-1;i++)
      {
          if(a[i]!=0)
          {
              if(a[i]==a[i+1])
                  a[count++]=2*a[i];
              else
                  a[count++]=a[i];
          }
      }
      while(count<n)
          a[count]=0;
      for(ll i=0;i<n;i++)
          cout<<a[i]<<" ";
      cout<<"\n";
  }
  return 0;
}
