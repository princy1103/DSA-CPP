//Tree
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node *createTree()
{
    cout<<"Enter value of node:"<<endl;
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }
    node *root=new node(data);
    cout<<"Enter Left node :"<<root->data<<endl;
    root->left=createTree();
    cout<<"Enter right node :"<<root->data<<endl;
    root->right=createTree();
    return root;
}
void postorder(node *root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";
}
int main()
{
    node *root=createTree();
    cout<<"PostOrder :";
    postorder(root);
    return 0;
}