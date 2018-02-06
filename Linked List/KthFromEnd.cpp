void iter(Node *head, int k)
{
  if(!head)
    return;
  Node *cur = head;
  Node *temp = head;
  for(ll i=0;i<k;i++)
    cur = cur->next;
  if(!cur)
    return;
  while(cur)
  {
    temp = temp->next;
    cur = cur->next;
  }
  cout<<temp->data<<"\n";
}

Node* recur(Node *head, int k, int &i)
{
  if(!head)
    return NULL;
  node *cur = recur(head->next,k,i);
  i++;
  if(i==k)
    return head;
  return cur;
}
