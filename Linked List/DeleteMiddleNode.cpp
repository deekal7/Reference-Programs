void del_middle(Node *m)
{
  if(!m || !(m->next))
    return;
  Node *next = n->next;
  n->data = n->next->data;
  n->next = n->next->next;
  delete next;
}
