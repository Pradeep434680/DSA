#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;

  Node(int data){
    this->data = data;
    next = NULL;
    prev=NULL;
  }

};
int main(){
    int arr[]={};
    Node *head = NULL;
    Node *past;
    Node *temp;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
    if(head ==NULL){
        head = new Node(arr[i]);
        past = head;
    }else{
        temp = new Node(arr[i]);
        temp->prev = past;
        past->next =temp;
        past = temp;
    }

    }
    // temp = head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    cout<<endl;
    vector<int>ans;
    
    ans.push_back(head->data);

    Node *curr = head;
    temp = head;
    curr=curr->next;
    while(curr){
        if(temp->data == curr->data){
            curr=curr->next;
        }else{
            ans.push_back(curr->data);
            temp = curr;
            curr=curr->next;
        }
    }
    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i]<<" ";
    // }
     cout<<endl;
     curr = head;
     past = NULL;
     for(int i=0; i<ans.size(); i++){
        curr->data = ans[i];
        // cout<<curr->data<<" ";
        past = curr;
        curr=curr->next;

     }
     past->next =NULL;


     curr = head;
     while(curr){
        cout<<curr->data<<" ";
        curr = curr->next;
     }


}