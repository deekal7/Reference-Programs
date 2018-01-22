#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
string rle(string s)
{
  stringstream ss;
  for(ll i=0;i<s.size();i++)
  {
    ss<<s[i];
    ll count=1;
    while(s[i]==s[i+1] && (i+1)<s.length())
    {
      count++;
      i++;
    }
    ss<<to_string(count);
  }
  return ss.str();
}
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
    string s;
  cin>>s;
  string res = rle(s);
  (s.size()<res.size())?cout<<s<<"\n":cout<<res<<"\n";
  return 0;
}
