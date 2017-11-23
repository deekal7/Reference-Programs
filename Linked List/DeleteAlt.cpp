//Iterative

void delAlt(node* head)
{
  if(head==NULL)
    return;
  node* prev=head,cur=head->next;
  while(prev && cur)
  {
    prev->next=cur->next;
    delete(cur);
    prev=prev->next;
    if(prev)
      cur=prev->next;
  }
}

//Recursive

void delAlt(node *head)
{
  if(head==NULL)
    return;
  node* cur=head->next;
  head->next=cur->next;
  delete(cur);
  delAlt(head->next);
}
