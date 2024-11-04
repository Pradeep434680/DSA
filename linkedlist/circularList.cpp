#include<iostream>
using namespace std;

struct cNode
{
    int data;
    cNode *next;
};

struct cList
{
    cNode * front;
    cNode * rear;
};

void create(struct cList *l1,int x)
{
    if(l1->front == NULL)
    {
        cNode *temp ;
        temp = new cNode;
        temp->data = x;
        temp->next = temp;
        l1->front = temp;
        l1->rear = temp;
    }
   
}

void append(struct cList *l1,int x)
{
    if(l1->front == NULL)
    create(l1,x);
    else
    {
        cNode * temp = new cNode;
        temp->data = x;
        l1->rear->next = temp;
        temp->next = l1->front;
        l1->rear = temp;
    }
}

void display(struct cList l1)
{
    cNode *temp = l1.front ;

    if(temp == NULL)
    {
        cout<<"Linked list is empty\n";
        return;
    }
    while(temp != l1.rear)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    if(temp == l1.rear)
    {
        cout<<temp->data;
    }
};

void deleteFromFront(struct cList *l1)
{
        cNode *temp = l1->front;
    if(l1->front == l1->rear)
    {
        l1->front = NULL;
        l1->rear  =NULL;
        delete temp;
    }
    else{

    // cNode *temp = l1->front;
    l1->front = l1->front->next;
    l1->rear->next = l1->front;
    delete temp;
    }
}

void deleteFromRear(struct cList *l1)
{
    cNode *temp = l1->front;

    if(l1->front == l1->rear)
    {
        l1->front = NULL;
        l1->rear  = NULL;
        delete temp;
        return;
    }
    else{
    while(temp->next !=l1->rear)
    {
        temp = temp->next;
    }
    temp->next = l1->front;
    delete l1->rear;
    l1->rear = temp;

    }


}

int main()
{
    cList l1;
    l1.front = NULL;
    l1.rear= NULL;
    create(&l1,30);
    append(&l1,20);
    append(&l1,40);
    append(&l1,10);
    append(&l1,50);
    deleteFromFront(&l1);
    deleteFromRear(&l1);
    display(l1);

}