#include<bits/stdc++.h>
using namespace std;

static int FindMinInArray(vector<int>& a,int left,int right)
{
  if(left==right)
    return a[left];

  if(left>right)
    return a[0];

  int mid = (left+right)/2;

  if(mid<right && a[mid+1]<a[mid])
    return a[mid+1];

  if(mid>left && a[mid-1]>a[mid])
    return a[mid];

  if(a[right]>a[mid])
    return FindMinInArray(a,left,mid-1);
  return FindMinInArray(a,mid+1,right);
}
static int FindMin(vector<int>& a)
{
  return FindMinInArray(a,0,a.size());
}

int main()
{
  cout<<"Enter array"<<endl;
  int input;
  vector<int> v;
  while(cin>>input)
  {
    v.push_back(input);
  }
  cout<<FindMin(v)<<endl;
  return 0;
}
