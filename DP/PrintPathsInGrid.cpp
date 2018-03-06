#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

void printPathUtil(int *mat, int i, int j, int r, int c, int* path, int pi)
{
  if(i==r-1)
  {
    for(int k=j;k<c;k++)
      path[pi+k-j] = *((mat+i*c)+k);
    for(int l=0;l<pi+c-j;l++)
      cout<<path[l]<<" ";
    cout<<"\n";
    return;
  }
  if(j==c-1)
  {
    for(int k=i;k<r;k++)
      path[pi+k-i]=*((mat+k*c)+j);
    for(int l=0;l<pi+r-i;l++)
      cout<<path[l]<<" ";
    cout<<"\n";
    return;
  }
  path[pi]=*((mat+i*c)+j);
  printPathUtil(mat, i+1, j, r, c, path, pi+1);
  printPathUtil(mat, i, j+1, r, c, path, pi+1);
}
void printPath(int *mat, int r, int c)
{
  int *path = new int[r+c];
  printPathUtil(mat, 0, 0, r, c, path, 0);
}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
  int r,c;
  cin>>r>>c;
  int mat[r][c];
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      cin>>mat[i][j];
    }
  }
  printPath(*mat, r, c);
  return 0;
}
