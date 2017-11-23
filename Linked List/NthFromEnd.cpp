node nthfromend(node *head,int n)
{
  node* main=head;
  node* ref=head;
  int count=0;
  while(count<n)
  {
    if(ref==NULL)
      return NULL;
    ref=ref->next;
    count++;
  }
  while(ref!=NULL)
  {
    main=main->next;
    ref=ref->next;
  }
  return main;
}
