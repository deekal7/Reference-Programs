void altSplit(node* source, node** aref, node** bref)
{
  node* a=NULL;
  node** alast=&a;
  node* b=NULL;
  node** blast=&b;
  node* cur=source;
  while(cur)
  {
    movenode(&(alast),&cur);
    alast=&((*alast)->next);
    if(cur)
    {
      movenode(&(blast),&cur);
      blast=&((*blast)->next);
    }
  }
  aref=a;
  bref=b;
}

void movenode(node** dest,node** source)
{
  node* new_node=*source;
  *source=new_node->next;
  new_node->next=*dest_ref;
  *dest_ref=new_node;
}
