void swap(node* &a,node * &b)
{
  node *temp = a;
  a=b;
  b=temp;
}
void swapNodes(node **head,int x,int y)
{
  if(x==y)
    return;
  node **a=NULL,**b=NULL;
  while(*head)
  {
    if(*head->data==x)
      a=head;
    else if(*head->data==y)
      b=head;
    head=&(*head->next);
  }
  if(a && b)
  {
    swap(*a,*b);
    swap(*a->next,*b->next);
  }
}
