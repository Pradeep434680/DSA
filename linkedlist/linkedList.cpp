#include<iostream> 
#include<vector>
#include<stack>
using namespace std;
class Node{
    public:
    int data ;
   
    Node * next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
Node * reverseLinkedList(Node * head){
    Node * prev = NULL;
    Node * curr = head;
    Node * fut = head->next;
    Node * temp;

    while(temp)
    {
        temp = fut->next;
        curr->next = prev;
        fut->next= curr;
        prev = curr;
        curr= fut;
        fut= temp;
    }
    head = curr;
    return head;

}
int main(){
    int arr[] ={1,2,3};
    int size = sizeof(arr)/ sizeof(arr[0]);
    Node *Head = NULL;
    Node * tail;
    Node * temp;
    for(int i=0; i<size; i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
        }else{
            tail = Head;
            while(tail->next != NULL){

                tail = tail->next;

            }
            temp = new Node(arr[i]);
            tail->next = temp;
           

        }
    }
    
// cout<<Head->data<<endl;

//reverse a linked list
// vector<int>ans;
// Node *curr = Head;
// while(curr){
//     ans.push_back(curr->data);
//     curr= curr->next;
// }
// for(int i=0; i<ans.size();i++){
//     cout<<ans[i]<<" ";
// }
// int i=ans.size()-1;
// curr = Head;
// while(curr){
//     curr->data = ans[i];
//     i--;
// }
// //delete the last node
// Node * present  = Head;
// int count = 0;
// while(present){
//     present = present->next;
//     count++;

// }
// count/=2;
// Node * previous  = NULL;
// present = Head;
// while(count--){
//     previous = present;
//     present = present ->next;

// }

// if(present->next ){
//     previous ->next = present->next;
//     delete present;
// }
// else{
//     previous->next = NULL;
//     delete present;
// }

//   Node *head0=NULL,*head1=NULL,*head2 = NULL;
//   Node *curr1,*curr2,*curr0,*curr;
//       curr = Head;
//       while(curr){
//           if(curr->data == 0){
//               if(head0 == NULL){
//                   head0 = new Node(0);
//                   curr0 = head0;
//               }else{
//                   curr0->next = new Node(0);
//                   curr = curr->next;
//               }
//           }
//           else if(curr->data == 1){
//               if(head1 == NULL){
//                   head1 = new Node(1);
//                   curr1 = head1;
//               }else{
//                   curr1->next = new Node(1);
//                   curr = curr->next;
//               }
//           }
//          else if(curr->data == 2){
//               if(head2 == NULL){
//                   head2 = new Node(2);
//                   curr2 = head2;
//               }else{
//                   curr2->next = new Node(2);
//                   curr = curr->next;
//               }
//            }
          
//       }
//       curr0->next= head1;
//       curr1->next = head2;
//        curr2->next = NULL;
 Head = reverseLinkedList(Head);
temp = Head;
while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}
}

    // bool backspaceCompare(string s, string t) {
    //     stack<char>st1;
    //     stack<char>st2;
    //     for(int i=0; i<s.size(); i++){
    //         if(s[i] != '#'){
    //             st1.push(s[i]);

    //         }else{
    //             if(!st1.empty()){
    //                 cout<<s[i]<<endl<<st1.top();
    //                st1.pop();
    //             }
                    
    //         }
    //     }
    //     for(int i=0; i<t.size(); i++){
    //         if(t[i] != '#'){
    //             st2.push(t[i]);

    //         }else{
    //             if(!st2.empty()){
    //                 cout<<t[i]<<endl<<st2.top();
    //               st2.pop();
    //             }
                   
    //         }
    //     }
    //     int i = st1.size();
    //     while(i){
    //         if(st1.top() != st2.top()){
    //             return 0;
    //         }
    //         st1.pop();
    //         st2.pop();
    //         i--;
    //     }
    //     return 1;
    // };
    // int main(){
    //     cout<<backspaceCompare("bxj##tw","bxj###tw");
    // }


        
        