#include<bits/stdc++.h>
using namespace std;

int findMax(node* root,int &res)
{
  if(root==NULL)
    return 0;
  int l=findMax(root->left,res); //max path sum for left child
  int r=findMax(root->right,res); //max path sum for right child

  int max_single=max(max(l,r)+root->data,root->data); //the max single child path for root

  int max_top=max(max_single,l+r+root->data); //the max sum when none of roots ancestors are considered

  res=max(res,max_top);
  return max_single;
}

int findMaxSum(node* root)
{
  int res=INT_MIN;
  findMax(root,res);
  return res;
}
