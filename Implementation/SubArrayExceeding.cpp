#include<bits/stdc++.h>
using namespace std;

static int smallestSub(int a[],int n,int k)
{
  int start=0,end=0;
  int minlen = n+1,cursum=0;
  while(end<n)
  {
    while(cursum<k && end<n)
    {
      cursum+=a[end++];
    }
    while(cursum>=k && start<n)
    {
      if(end-start<minlen)
      {
        minlen=end-start;
      }
      cursum-=a[start++];
    }
  }
  return minlen;
}

int main()
{
  int n,k;
  cout<<"Enter size of array"<<endl;
  cin>>n;
  int a[n];
  cout<<"Enter array elements"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Enter sum"<<endl;
  cin>>k;
  int result = smallestSub(a,n,k);
  cout<<result<<endl;
  return 0;
}
