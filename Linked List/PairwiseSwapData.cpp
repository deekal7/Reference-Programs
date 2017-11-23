//Iterative

void pairswap(node* head)
{
  node* temp=head;
  while(temp && temp->next)
  {
    swap(&temp,&temp->next);
    temp=temp->next->next;
  }
}

//Recursive

void pairswap(node* head)
{
  while(head && head->next)
  {
    swap(&head, &head->next);
    pairswap(head->next->next);
  }
}
