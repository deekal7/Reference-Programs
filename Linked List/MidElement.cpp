//Method 1
node printMiddle(node *head)
{
  node *slow=head;
  node *fast=head;
  while(fast!=NULL && fast->next!=NULL)
  {
    fast=fast->next->next;
    slow=slow->next;
  }
  return slow;
}

//Method 2
node printMiddle(node *head)
{
  node *cur=head;
  int count=0;
  while(head)
  {
    if(count & 1)
      cur=cur->next;
    count++;
    head=head->next;
  }
  return cur;
}
