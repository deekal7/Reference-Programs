#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    map<char,int> m;
    string a,b;
    cin>>a>>b;
    int count=0;
    for(int i=0;i<a.length();i++)
    {
      m[a[i]]++;
    }
    for(int i=0;i<b.length();i++)
    {
      if(m[b[i]]!=m.end()&&m[b[i]]>0)
      {
        count++;
        m[b[i]]--;
      }
    }
    cout<<(a.length()+b.length()-2*count)<<endl;
  }
}
