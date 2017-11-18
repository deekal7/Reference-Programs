#include<bits/stdc++.h>
using namespace std;

void Kdown(node *root,int k) //to print the node at distance k from root
{
  if(root==NULL || k<0)
    return;
  if(k==0)
  {
    cout<<root->data<<"\n";
    return;
  }
  Kdown(root->left,k-1);
  Kdown(root->right,k-1);
}

int Kall(node *root,node *target,int k)
{
  if(root==NULL)
    return -1;
  if(root==target) //if target has been found print below distance k elements
  {
    Kdown(root,k);
    return 0;
  }
  int dl = Kall(root->left,target,k); //distance of left ancestor from the target node
  if(dl!=-1)
  {
    if(dl+1==k) //if root distance is k print its value
      cout<<root->data<<"\n";
    else //print the right subtree value which is k-dl-2 from root
      Kdown(root->right,k-dl-2); //as the right child is 2 edges away from left child
    return dl+1; //updated distance
  }
  int dr=Kall(root->right,target,k);
  if(dr!=-1)
  {
    if(dr+1==k)
      cout<<root->data<<"\n";
    else
      Kdown(root->left,k-dr-2);
    return dr+1;
  }
  return -1;
}
