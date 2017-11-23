//Iterative Method
void reverse(node **head)
{
  node* prev=NULL,next=NULL,cur=*head;
  while(cur)
  {
    next=cur->next;
    cur->next=prev;
    prev=cur;
    cur=next;
  }
  *head=prev;
}

//Recursive Method
void reverse(node **head)
{
  node* first,rest;
  if(*head==NULL)
    return;
  first=*head;
  rest=first->next;
  if(res==NULL)
    return;
  reverse(&rest);
  first->next->next=first;
  first->next=null;
  *head=rest;
}
