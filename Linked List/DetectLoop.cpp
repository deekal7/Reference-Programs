//Floyds Algorithm
int detectloop(node* head)
{
  node* slow=head,*fast=head;
  while(slow && fast && fast->next)
  {
    slow=slow->next;
    fast=fast->next->next;
    if(fast==slow)
    {
      break;
    }
  }
  if(fast==NULL||fast->next==NULL)
    return NULL;
  slow=head;
  while(slow!=fast)
  {
    slow=slow->next;
    fast=fast->next;
  }
  return fast;
}

//Hashing
int detectloop(node *h)
{
  unordered_set<node *> s;
  while(h)
  {
    if(s.find(h)!=s.end())
      return 1;
    s.insert(h);
    h=h->next;
  }
}
