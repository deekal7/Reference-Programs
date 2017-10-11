#include<bits/stdc++.h>
using namespace std;

static string rle(string str)
{
  int len = str.size();
  if(len==0)
  {
    return string("");
  }

  char lastseen = '\0';
  stringstream result;
  int counter = 1;

  for(int i=0;i<len;i++)
  {
    if(str.at(i) == lastseen)
    {
      counter++;
    }
    else
    {
      if(lastseen != '\0')
      {
        result<<lastseen<<counter;
      }
      counter = 1;
      lastseen = str.at(i);
    }
  }
  result<<lastseen<<counter;
  return result.str();
}
int main()
{
  string str;
  cout<<"Enter string"<<endl;
  cin>>str;
  string result = rle(str);
  cout<<result;
  return 0;
}
