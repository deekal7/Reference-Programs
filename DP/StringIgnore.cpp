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
  ll t;
  string temp;
  getline(cin,temp);
  while(t--)
  {
      string str;
      getline(cin,str);
      set<char> s;
      for(int i=0;i<str.size();i++)
      {
          if(s.find(tolower(str[i]))==s.end())
          {
              cout<<str[i];
              s.insert(tolower(str[i]));
          }
          else
            s.erase(tolower(str[i]));
      }
      cout<<"\n";
  }
  return 0;
}
