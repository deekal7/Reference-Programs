int getcount(node *head)
{
  node *cur=head;
  int count=0;
  while(cur)
  {
    cur=cur->next;
    count++;
  }
  return count;
}

int getInter(node* head1, node* head2)
{
  int c1=getcount(head1);
  int c2=getcount(head2);
  int d;
  if(c1>c2)
  {
    d=c1-c2;
    return getVal(d,head1,head2);
  }
  else
  {
    d=c2-c1;
    return getVal(d,head2,head1);
  }
}

int getVal(int d, node* head1, node* head2)
{
  node* cur1=head1, cur2=head2;
  for(int i=0;i<d;i++)
  {
    if(cur1==NULL)
      return -1;
    cur1=cur1->next;
  }
  while(cur1 && cur2)
  {
    if(cur1==cur2)
      return cur1->data;
    cur1=cur1->next;
    cur2=cur2->next;
  }
  return -1;
}
