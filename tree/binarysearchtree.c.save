#include<iostream>
using namespace std;
struct node{
int data;
struct node*left;
struct node*right;
};
struct node*createNode(int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
        return n;
};
int isBST(struct node *root)
{
    static struct node *prev=NULL;
    if(root!=NULL)
    {
        if(isBST(root->left))
        {
            return 0;
        }
    }
    if(prev )
}
