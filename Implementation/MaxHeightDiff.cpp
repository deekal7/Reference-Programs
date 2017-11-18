#include<bits/stdc++.h>
using namespace std;

int minDiff(int arr[],int n,int k)
{
  if(n==1)
    return 0;
  sort(arr,arr+n);
  int ans = arr[n-1]-arr[0]; //corner cases
  int big = arr[n-1]-k;
  int small = arr[0]+k;
  if(small>big)
    swap(small,big);
  for(int i=1;i<n-1;i++)
  {
    int add=arr[i]+k;
    int sub=arr[i]-k;
    if(sub>=small||add<=big)
      continue;
    if(big-sub <= add-small) //in this case small can be replaced by sub as it gives a lesser difference
      small=sub;
    else
      big=add;
  }
  return min(ans,big-small);
}
