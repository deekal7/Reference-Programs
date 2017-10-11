#include<bits/stdc++.h>
using namespace std;

static bool perfectSquare(int n)
{
  for(int i=1,sum=0;sum<n;i+=2)
  {
    sum+=i;
    if(sum==n)
      return true;
  }
  return false;
}

int main()
{
  int n;
  cout<<"Enter a number"<<endl;
  cin>>n;
  cout<<perfectSquare(n)<<endl;
  return 0;
}
