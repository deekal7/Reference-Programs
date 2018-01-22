#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

bool isUnique(string s)
{
  int flag = 0;
  sort(s.begin(),s.end());
  for(ll i=0;i<s.size()-1;i++)
  {
    if(s[i]==s[i+1])
    {
      flag=1;
      break;
    }
  }
  return (flag!=1);
}

int main()
{
  string s;
  cout<<"Enter string";
  cin>>s;
  if(isUnique(s))
    cout<<"String is unique\n";
  else
    cout<<"String is not unique\n";
  return 0;
}
