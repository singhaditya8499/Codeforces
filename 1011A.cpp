#include<bits/stdc++.h>
using namespace std;
 struct bnode{
 int data;
 bnode *left;
 bnode *right;
}*root=NULL;
bnode* insert(int data,bnode *root)
{
 if(root==NULL)
 {
  bnode *tmp=new bnode;
  tmp->left=tmp->right=NULL;
  tmp->data=data;
  root=tmp;
  return tmp;
 }
 else
 {
  if(data>root->data)
   root->right=insert(data,root->right);
  else
   root->left=insert(data,root->left);
  return root;
 }
}
void inorder(bnode *root)
{
 if(!root)
  return;
 inorder(root->left);
 cout<<root->data<<" ";
 //if(root->right)
 inorder(root->right);
}
void connect(bnode *root,vector<int> v[])
{
 if(!root)
  return;
 if(root->left)
 {
  v[root->data].push_back(root->left->data);
  v[root->left->data].push_back(root->data);
  connect(root->left,v);
 } 
 if(root->right)
 {
  v[root->data].push_back(root->right->data);
  v[root->right->data].push_back(root->data);
  connect(root->right,v); 
 }
}
int main()
{
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 sort(s.begin(),s.end());
 int ans=0,kk=0;
 int i=0;
 ans+=s[i]-'a'+1;
 //i++;
 kk++;
 int last=s[i]-'a';
 i++;
 while(i<s.length()&&kk<k)
 {
  if((s[i]-'a')-last<2)
  {
   i++;
  }
  else
  {
   ans+=s[i]-'a'+1;
   last=s[i]-'a';
   kk++;
   i++;
  }
 }
 if(kk==k)
  cout<<ans<<"\n";
 else
  cout<<-1;
}