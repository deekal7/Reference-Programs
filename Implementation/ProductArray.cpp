#include<bits/stdc++.h>
using namespace std;

int main()
{
  cout<<"Enter number of elements in array"<<endl;
  int n;
  cin>>n;
  cout<<"Enter array elements"<<endl;
  int a[n],givensum;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"Enter product value"<<endl;
  cin>>givensum;
  int cursum = a[0];
  int start = 0,end = 0,count = 0;
  while(end<n)
  {
    if(cursum<=givensum)
      count+=(end-start)+1;
    if(cursum<=givensum)
    {
      end++;
      if(end<n)
      {
        cursum*=a[end];
      }
    }
    else
    {
      cursum/=a[start];
      start++;
    }
  }
  cout<<count<<endl;
  return 0;
}
