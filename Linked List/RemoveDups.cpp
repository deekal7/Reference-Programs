#include<bits/stdc++.h>
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;
void delDupes(Node *head)
{
  if(!head)
  {
    return;
  }
  Node *prev = null,*cur=head;
  set<ll> s;
  while(cur)
  {
    if(s.find(cur->data)!=s.end())
    {
      Node *temp = cur;
      prev->next = cur->next;
      delete temp;
    }
    else
    {
      s.insert(cur->data);
      prev = n;
    }
    n = n->next;
  }
}

void deleteDupes2(Node *head)
{
  if(head==NULL)
    return;
  Node *cur = head;
  while(cur)
  {
    Node *runner = cur;
    while(runner->next)
    {
      if(runner->next->data == cur->data)
      {
        Node *temp = runner->next;
        runner->next = runner->next->next;
        delete temp;
      }
      else
        runner = runner->next;
    }
    cur = cur->next;
  }
}
int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  return 0;
}
