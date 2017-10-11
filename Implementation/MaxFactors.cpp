#include<bits/stdc++.h>
using namespace std;

static int factors(int n)
{
  int count=0;
  for(int i=1;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
      if(n/i==i)
        count++;
      else
        count+=2;
    }
  }
  return count;
}

int main()
{
  int n,max_length=0,ele1=0,ele2=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a,a+n);
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      int prod = a[i]*a[j];
      int count = factors(prod);
      if(count>=max_length)
      {
        max_length = count;
        ele1=a[i];
        ele2=a[j];
      }
    }
  }
  cout<<ele1<<" "<<ele2<<" "<<max_length<<endl;
}
