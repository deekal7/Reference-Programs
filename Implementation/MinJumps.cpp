#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int jumps(int arr[],int n)
{
  if(n<=0)
    return 0;
  if(arr[0]==0)
    return -1;
  int maxReach=arr[0]; //initialize
  int steps=arr[0];
  int jump=1;
  for(int i=1;i<n;i++)
  {
    if(i==n-1) //have reached end
      return jump;
    maxReach=max(maxReach,arr[i]+i); //update the max reach block
    steps--;
    if(steps==0)
    {
      if(i>=maxReach) //have travelled beyond limit
        return -1;
      steps=maxReach-i; //remaining number of steps
    }
  }
  return -1;
}
