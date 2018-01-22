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
  string s1,s2;
  cin>>s1>>s2;
  if(s1.length()==s2.length() && s1.length()>0)
  {
    string s = s1+s1;
    if(s.find(s2)!=string::npos)
      cout<<"Is rotation\n";
    else
      cout<<"Not rotation\n";
  }
  return 0;
}
