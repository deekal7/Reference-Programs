#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
bool isPerm(string s)
{
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  ll bit=0;
  for(ll i=0;i<s.size();i++)
  {
    if(isalnum(s[i]))
    {
      ll pos = 1<<(s[i]-'a');
      if((bit & pos) == 0)
        bit |=pos;
      else
        bit &= ~pos;
    }
  }
  return(!(bit & (bit-1)));
}
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  string s;
  getline(cin,s);
  if(isPerm(s))
    cout<<"Is PalPerm\n";
  else
    cout<<"Not PalPerm\n";
  return 0;
}
