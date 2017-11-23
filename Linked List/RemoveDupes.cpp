//SortedList

void removedupes(node* head)
{
  node* cur=head,next2;
  if(cur==NULL)
    return;
  while(cur)
  {
    if(cur->data==cur->next->data)
    {
      next2=cur->next->next;
      delete(cur->next);
      cur->next=next2;
    }
    else
      cur=cur->next;
  }
}

//UnsortedList
void removedupes(node* head)
{
  node* cur=head,prev=NULL;
  unordered_set<int> seen;
  while(cur)
  {
    if(seen.find(cur->data)!=seen.end())
    {
      prev->next=cur->next;
      free(cur);
    }
    else
    {
      seen.insert(cur->data);
      prev=cur;
    }
    cur=prev->next;
  }
}
