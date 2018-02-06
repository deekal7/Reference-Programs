//stable approach
Node* partition(Node* node,int x)
{
  Node *beforeS=null, *beforeE=null, *afterS=null, *afterE=null;
  if(!node)
    return NULL;
  while(node)
  {
    if(node->data<x)
    {
      if(!beforeS)
      {
        beforeS=node;
        beforeE=beforeS;
      }
      else
      {
        beforeE->next = node;
        beforeE = node;
      }
    }
    else
    {
      if(!afterS)
      {
        afterS=node;
        afterE=afterS;
      }
      else
      {
        afterE->next = node;
        afterE = node;
      }
    }
    node = node->next;
  }
  if(!beforeS)
    return afterS;
  beforeE->next=afterS;
  return beforeS;
}

//unstable two variables
Node* partition(Node* node, int x)
{
  Node* head = node;
  Node* tail = node;
  while(node)
  {
    if(node->data<x)
    {
      node->next=head;
      head=node;
    }
    else
    {
      tail->next=node;
      tail=node;
    }
    node=node->next;
  }
  tail->next=NULL;
  return head;
}

