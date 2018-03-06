#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
void longestPalindrome(string s)
{
  int len=s.size();
  int start=0;
  int maxlen=1;
  bool table[len][len];
  memset(table, 0, sizeof(table));
  for(int i=0;i<len;i++)
    table[i][i]=true;
  for(int i=0;i<len-1;i++)
  {
    if(s[i]==s[i+1])
    {
      table[i][i+1]=true;
      start=i;
      maxlen=2;
    }
  }
  for(int k=3;k<=len;k++)
  {
    for(int i=0;i<len-k+1;i++)
    {
      int j=i+k-1;
      if(table[i+1][j-1] && s[i]==s[j])
      {
        table[i][j]=true;
        start=i;
        maxlen=k;
      }
    }
  }
  cout<<s.substr(start,maxlen)<<"\n";
}
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif
  string s;
  cin>>s;
  longestPalindrome(s);
  return 0;
}
