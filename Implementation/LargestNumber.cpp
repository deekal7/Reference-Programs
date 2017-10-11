#include<bits/stdc++.h>
using namespace std;

static bool lexicalCompare(int x,int y)
{
  string X = to_string(x);
  string Y = to_string(y);
  string XY = X.append(Y);
  string YX = Y.append(X);

  return XY.compare(YX)>0?true:false;
}

static string largestNumber(vector<int>& a)
{
  string largestNumber="";
  sort(a.begin(),a.end(),lexicalCompare);
  for(int i=0;i<a.size();i++)
  {
    largestNumber.append(to_string(a[i]));
  }
  return largestNumber;
}

int main()
{
  cout<<"Enter integer array"<<endl;
  vector<int> a;
  int input;
  while(cin>>input)
  {
    a.push_back(input);
  }
  string result = largestNumber(a);
  cout<<result<<endl;
  return 0;
}
