#include<bits/stdc++.h>
#define R 3
#define C 5
using namespace std;

bool isvalid(int i,int j) //check if coordinate is valid
{
  return(i>=0 && j>=0 && i<r && j<c);
}
struct ele
{
  int x,y;
}
bool isdelim(ele temp) //check if coord is delimiter
{
  return(temp.x==-1 && temp.y==-1);
}
bool checkall(int arr[][C]) //check if a 1 still exists in the array
{
  for(int i=0;i<R;i++)
  {
    for(int j=0;j<C;j++)
    {
      if(arr[i][j]==1)
        return true;
    }
  }
  return false;
}

int rotOranges(int arr[][C])
{
  queue<ele> q;
  ele temp;
  int ans=0;
  for(int i=0;i<R;i++)
  {
    for(int j=0;j<C;j++)
    {
      if(arr[i][j]==2) //push all rotten o's into queue
      {
        temp.x=i;
        temp.y=j;
        q.push(temp);
      }
    }
  }
  temp.x=-1; //push delimiter
  temp.y=-1;
  q.push(temp);
  while(!q.empty())
  {
    bool flag=false;
    while(!isdelim(q.front()))
    {
      temp=q.front();
      if(isvalid(temp.x+1,temp.y) && arr[temp.x+1][y]==1) //bottom
      {
        if(!flag)
          ans++;
        flag=true;
        arr[temp.x+1][temp.y]=2;
        temp.x++;
        q.push(temp);
        temp.x--;
      }
      if(isvalid(temp.x-1,temp.y) && arr[temp.x-1][y]==1) //top
      {
        if(!flag)
          ans++;
        flag=true;
        arr[temp.x-1][temp.y]=2;
        temp.x--;
        q.push(temp);
        temp.x++;
      }
      if(isvalid(temp.x,temp.y+1) && arr[temp.x][y+1]==1) //right
      {
        if(!flag)
          ans++;
        flag=true;
        arr[temp.x][temp.y+1]=2;
        temp.y++;
        q.push(temp);
        temp.y--;
      }
      if(isvalid(temp.x,temp.y-1) && arr[temp.x][y-1]==1) //left
      {
        if(!flag)
          ans++;
        flag=true;
        arr[temp.x][temp.y-1]=2;
        temp.y--;
        q.push(temp);
        temp.y++;
      }
      q.pop();
    }
    q.pop(); //pop delimiter
    if(!q.empty()) //if there are still values in the queue begin next frame
    {
      temp.x=-1;
      temp.y=-1;
      q.push(temp);
    }
  }
  return (checkall(arr))?-1:ans;
}
