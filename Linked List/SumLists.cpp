//reverse order
Node* sumlist(Node* l1, Node* l2)
{
  Node preHead(0);
  Node *p=&preHead;
  if(!l1 && !l2)
    return NULL;
  int sum=0
  while(l1||l2||sum)
  {
    sum+=(l1)?l1->val:0;
    sum+=(l2)?l2->val:0;
    p->val=new Node(sum%10);
    p=p->next;
    l1=l1?l1->next:l1;
    l2=l2?l2->next:l2;
    sum/=10;
  }
  return preHead->next;
}

//msd->lsd
ListNode* sumlist(ListNode* l1, ListNode* l2)
{
  stack<int> f1, f2;
  ListNode *res = new ListNode(0);
  int sum  = 0;
  while(l1)
  {
    f1.push(l1->val);
    l1 = l1->next;
  }
  while(l2)
  {
    f2.push(l2->val);
    l2 = l2->next;
  }
  while(!f1.empty() || !f2.empty())
  {
    if(!f1.empty())
    {
      sum+=f1.top();
      f1.pop();
    }
    if(!f2.empty())
    {
      sum+=f2.top();
      f2.pop();
    }
    res->val = sum % 10;
    ListNode* head = new ListNode(sum /= 10);
    head->next = res;
    res = head;
  }
  return res->val? res : res->next;
}
