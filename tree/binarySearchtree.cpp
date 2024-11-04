#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *left,*right;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

Node * insert(Node *root,int target)
{
    if(!root)
    {
        Node *temp =  new Node(target);
        
        return temp;
    }

    if(root->data>target)
    {
        root->left = insert(root->left,target)
    }
    else
    {
        root->right= insert(root->right,target);
    }
}

int main()
{
    int arr[]={5,3,6,2,7,4};
    Node *root = NULL;
    

    for(int i=0; i<6; i++)
    {
        root = insert(root,arr[i]);
    }
    return 0;
}