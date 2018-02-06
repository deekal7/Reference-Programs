//Recursive
bool isPalindrome(node **left,node *right)
{
  if(right==NULL) //end recursion at end of list;
    return true;

  bool isp=isPalindrome(left,right->next);
  if(isp==false)
    return false;

  bool isp1=(right->data == (*left)->data);
  left=left->next;
  return isp1;
}

//Iterative
bool isPalindrome(ListNode* head)
{
  ListNode *fast=head, *slow=head;
  stack<int> s;
  while(fast && fast->next)
  {
      s.push(slow->val);
      slow=slow->next;
      fast=fast->next->next;
  }
  if(fast)        //odd number of nodes
      slow=slow->next;
  while(slow && !s.empty())
  {
      if(s.top()!=slow->val)
          return false;
      s.pop();
      slow=slow->next;
  }
  return true;
}

