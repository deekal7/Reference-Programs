#include<bits/stdc++.h>
using namespace std;

static void nextGreatest(string num)
{
  int i,len=num.size(),j,min=INT_MAX;
  for(i=len-1;i>0;i--)
  {
    if(num[i]>num[i-1]) //find first number from right which is less than prev number eg. 594763 it is 4
      break;
  }
  int x=num[i-1],index=i;
  if(i==0) //already max value
    return;
  for(j=i+1;j<len;j++) //find the number to the left of x that is min-max value
  {
    if(num[j]>x && num[j]<min)
    {
      min=num[j];
      index=j;
    }
  }
  swap(num[index],num[i-1]);
  sort(num.begin()+i,num.begin()+len); //sort the number to the left of x
  cout<<num<<"\n";
}

int main()

{
  string s;
  cin>>s;
  nextGreatest(s);
}
