// #include<iostream>
// using namespace std;
// class Stack{
//     int *arr;
//     int size;
//     int top;

//     public:
//     bool flag;// it will tell stack is empty or not if flag==1 ->empty

//     Stack(int s){
//         size=s;
//         top =-1;
//         arr = new int[s];
//         flag =1;
//     }
//     void push(int value){
//         if(top == size-1){
//             cout<<"stack overflow \n";
//             return;
//         }else{

//         top++;
//         arr[top] = value;
//         cout<<value<<" is pushed into the stack\n";
//         flag = 0;
//         }
//     }

//     void pop(){
//         if(top == -1){
//             cout<<"stack underflow\n";
//             return;
//         }else{
//         cout<<arr[top]<<" is poped from the stack\n";
//         top--;
//         if(top == -1){
//             flag =1;
//         }

//         }
//     }
//     int peak(){
//         if(top == -1){
//             cout<<"stack is empty\n";
//             return -1;
//         }else
//         return arr[top];
        
//     }
//     bool isEmpty(){
//        return top == -1;
//     }
//     int currSize(){
//         return top +1;
//     }
// };
// int main(){
//   Stack S1(5);
//   S1.push(-1);
//   int value = S1.peak();
//   if(S1.flag ==0)// if stack is not empty
//   cout<<value<<endl;

// // cout<<S1.peak();
// return 0;
  
// }

#include<iostream>
using namespace std;
class Stack
{
    int * arr;
    int size;
    int index;
    public:

    Stack(int n)
    {
        arr = new int[n];
        size = n;
        index = -1;
    }
    
    bool isEmpty()
    {
        return index == -1;
    }

    void push(int x)
    {
        if(index == size-1)
        {
            cout<<"stack overflow\n";
            return;
        }
        else
        {
            index++;
            cout<<x<<" is pushed into the stack\n";
            arr[index] = x;
        }
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"stack underflow\n";
        }
        else
        {
            cout<<arr[index]<<" is poped from the stack\n";
            index--;
        }
    }

    int top()
    {
        if(isEmpty())
        {
            
            return -1;
        }
        else
        {
            return arr[index];
        }
    }

    int sizeofStack()
    {
        return index + 1;
    }

};

int main()
{
    Stack S(5);
    
    S.top();
    if(S.top()==-1)
    {
        cout<<"stack is empty\n";
    }
    else{
        cout<<S.top()<<endl;
    }

}