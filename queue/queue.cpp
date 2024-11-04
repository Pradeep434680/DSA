// #include<iostream>
// using namespace std;
// class Queue
// {
//     int * arr;
//     int front, rear;
//     int size;
//     public:
//     Queue(int n)
//     {
//         arr = new int[n];
//         front = rear = -1;
//         size = n;
//     }

//     bool isEmpty()
//     {
//        return front == -1;
//     }
//     bool isFull()
//     {
//         return (rear + 1)%size == front;
//     }

//     void push(int x)
//     {
//         if(isEmpty())
//         {
//             front = rear = 0;
//             arr[0] = x;
//             cout<<x<<" is pushed into the queue\n";
//         }
//         else if(isFull())
//         {
//             cout<<"queue over flow condition\n";
//             return ;
//         }
//         else
//         {
//             rear =( rear + 1)%size;
//             arr[rear] = x;
//             // cout<<x<<" is pushed into the queue\n";

//         }

//     }
//     void pop()
//     {
//         if(isEmpty())
//         {
//             cout<<"queue underflow\n";
//         }
//         else
//         {
//             if(front == rear)
//             {
//                 // cout<<"poped number :"<<arr[front]<<endl;
//                 front = rear = -1;
//             }
//             else
//             {
//                 // cout<<"poped number :"<<arr[front]<<endl;
//                 front = (front +1)%size;
//             }
//         }
//     }
//     int start(){
//         if(isEmpty())
//         {
//             // cout<<"queue is empty\n";
//             return -1;
//         }
//         else
//         {
//             return arr[front];
//         }
//     }
// };

// int main()
// {
   
//     Queue p(5);
//     p.push(1);
//     p.push(2);
//     p.push(3);
//     p.push(4);
//     p.push(5);
//     // // p.pop();
//     // // p.pop();
//     // // p.pop(); 
//     // // p.pop();
//     // // p.pop(); 
//     // // p.push(6);
//     // int check = p.start();
//     // if(check==-1){
//     //     cout<<"queue is empty\n";
//     // }else{
//     //     cout<<"front element is:"<<check;
//     // }
//     while(!p.isEmpty()){
//         cout<<p.start()<<" ";
//         p.pop();
//     }

// }
