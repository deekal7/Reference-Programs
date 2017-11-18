#include<bits/stdc++.h>
using namespace std;

void levelOrder(node *root)
{
  if(root==NULL)
    return;
  queue<node*> q;
  q.push(root);
  while(!q.empty())
  {
    node *temp=q.front();
    cout<<temp->data<<"\n";
    q.pop();
    if(temp->left!=NULL)
      q.push(temp->left);
    if(temp->right!=NULL)
      q.push(temp->right);
  }
}
