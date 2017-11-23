//Iterative

node* intersort(node* a,node* b)
{
  node* result=NULL;
  node** last = &result;
  while(a && b)
  {
    if(a->data==b->data)
    {
      push(last,a->data);
      last=&((*last)->next);
      a=a->next;
      b=b->next;
    }
    if(a->data<b->data)
      a=a->next;
    else
      b=b->next;
  }
  return result;
}

void push(node** head,int data)
{
  node* new_node=new node;
  new_node->data=data;
  new_node->next=*head;
  *head=new_node;
}

//Recursive

node* intersort(node* a,node* b)
{
  if(!a || !b)
    return NULL;
  if(a->data<b->data)
    return intersort(a->next,b);
  if(a->data>b->data)
    return intersort(a,b->next);
  node* temp=new node;
  temp->data=a->data;
  temp->next=intersort(a->next,b->next);
  return temp;
}
