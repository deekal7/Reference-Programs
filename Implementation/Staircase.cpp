#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout<<"Enter number of blocks"<<endl;
  cin>>n;
  int i=0;
  while((i*(i+1))/2<=n)
  {
    i++;
  }
  cout<<(i-1)<<endl;
  return 0;
}
