bool isPalindrome(node **left,node *right)
{
  if(right==NULL) //end recursion at end of list;
    return true;

  bool isp=isPalindrome(left,right->next);
  if(isp=false)
    return false;

  bool isp1=(right->data == (*left)->data);
  left=left->next;
  return isp1;
}
