#include<iostream>
#include<queue>
using namespace std;

class Node
{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

};
// create binary tree using recursion

Node * create_tree()
{
    int x;
    cin>>x;
    if(x==-1)return NULL;
    Node * temp = new Node(x);
    cout<<"enter the left child of "<<x<<":";
    temp->left = create_tree();
    cout<<"enter the right child of "<<x<<":";
    temp->right= create_tree();
    return temp;
}

void printTree(Node * root)
{
    queue<Node * >q;
    q.push(root);
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left != NULL)
        {
            // cout<<temp->left->data;
            q.push(temp->left);
        }

        if(temp->right)
        {
            q.push(temp->right);
            // cout<<temp->right->data;
        }
    }
}

int main()
{
    cout<<"Enter the root element :";
    Node * root = create_tree();
    printTree(root);
}

// int main()
// {
//     int x;
//     cout<<"enter the root element of the tree:";
//     cin>>x;
//     int first;
//     int second;
//     queue<Node *>q;
//     Node * root = new Node(x);
//     q.push(root);


//     while(!q.empty())
//     {
//         Node * temp = q.front();
//         q.pop();
//         cout<<"enter the left child of "<<temp->data<<":";
//         cin>>first;
//         if(first != -1)
//         {
            
//             temp->left = new Node(first);
//             q.push(temp->left);
//         }

//         cout<<"enter the right child of "<<temp->data<<":";
//         cin>>second;

//         if(second != -1)
//         {
//             temp->right = new Node(second);
//             q.push(temp->right);
//         }
//     }

// }