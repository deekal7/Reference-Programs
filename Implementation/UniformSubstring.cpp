#include<bits/stdc++.h>
using namespace std;

static void longestUniform(string str,int *result)
{
  int longestLength = 0;
  int longestStart = -1;
  int len = str.size();
  int ix = 1;
  while(ix<len)
  {
    int start = ix-1;
    int currentLength = 1;
    while(str[ix]==str[ix-1])
    {
      ix++;
      currentLength++;
    }
    if(currentLength>longestLength)
    {
      longestStart = start;
      longestLength = currentLength;
    }
    ix++;
  }
  result[0]=longestStart;
  result[1]=longestLength;
}

int main()
{
  cout<<"Enter a string"<<endl;
  string str;
  cin>>str;
  int result[2];
  longestUniform(str,result);
  cout<<result[0]<<" "<<result[1]<<endl;
  return 0;
}
