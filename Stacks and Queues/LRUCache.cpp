#include<bits/stdc++h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

class LRUCache
{
  list<int> dq; //to represent the cache
  unordered_map<int, list<int>::iterator> ma; //to map the item with its position in cache queue
  int csize; //size of cache
public:
  LRUCache(int);
  void refer(int);
  void display();
}
LRUCache::LRUCache(int n) //constructor
{
  csize=n;
}
void LRUCache::refer(int x)
{
  if(ma.find(x)==ma.end())
  {
    if(dq.size()==csize) //if cache is full remove last element in queue
    {
      int last=dq.back();
      dq.pop_back();
      ma.erase(last);
    }
  }
  else //remove current postion marker
    dq.erase(ma[x]);

  dq.push_front(x); //add make poiter point to start of queue
  ma[x]=dq.begin();
}
void LRUCache::display()
{
  for(auto it:dq)
    cout<<it<<" "
  cout<<"\n";
}
