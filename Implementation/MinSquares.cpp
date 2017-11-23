#include<bits/stdc++.h>
using namespace std;

int minsquare(int a,int b)
{
  int result;
  if(a<b)
    swap(a,b);
  while(b>0)
  {
    result+=(a/b);
    int temp =a%b;
    a=b;
    b=temp;
  }
  return res;
}
