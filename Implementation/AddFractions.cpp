#include<bits/stdc++.h>
using namespace std;

static int gcd(int m,int n)
{
  if(n==0)
    return m;
  else
    return gcd(n,m%n);
}

static void lowest(int &num,int &den)
{
  int factor = gcd(num,den);
  num=num/factor;
  den=den/factor;
}

static void addFractions(int num1,int den1,int num2,int den2,int &num3,int &den3)
{
  den3=gcd(den1,den2);
  den3=(den1*den2)/den3;
  num3=num1*(den3/den1)+num2*(den3/den2);
  lowest(den3,num3);
}

int main()
{
  cout<<"Enter fractions"<<endl;
  int num1,den1,num2,den2,num3,den3;
  cin>>num1>>den1>>num2>>den2;
  addFractions(num1,den1,num2,den2,num3,den3);
  cout<<num3<<"/"<<den3;
  return 0;
}
