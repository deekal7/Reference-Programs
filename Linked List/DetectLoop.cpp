//Floyds Algorithm
int detectloop(node* head)
{
  node* slow=head,fast=head;
  while(slow && fast && fast->next)
  {
    slow=slow->next;
    fast=fast->next->next;
    if(fast==slow)
    {
      return 1;
    }
  }
  return 0;
}

//Hashing
int detectloop(node *head)
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
