node sortedmerge(node a,node b)
{
  node result=NULL;
  if(a==NULL)
    return b;
  if(b==NULL)
    return a;
  if(a->data <= b->data)
  {
    result=a;
    result->next=sortedmerge(a->next,b);
  }
  else
  {
    result=b;
    result->next=sortedmerge(a,b->next);
  }
  return result;
}
