#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
bool checkPerm(string s1, string s2)
{
  sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());
  return (s1==s2);
}
int main()
{
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif
  string s1,s2;
  cin>>s1>>s2;
  if(checkPerm(s1,s2))
    cout<<"They are permutations\n";
  else
    cout<<"They aren't permutations\n";
  return 0;
}


