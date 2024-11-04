#include<iostream>
using namespace std;
#include<queue>
#include<stack>
void display(queue<long long>q,vector<long long>&ans)
{
    int x=0;
    while(!q.empty())
    {
        if(q.front()<0){
            ans.push_back(q.front());
            x=1;
            break;
        }
        q.pop();
    }
    if(x==0)
    {
        ans.push_back(0);
    }
    // cout<<endl;
}
int main()
{
    vector<long long>ans;
    queue<long long>q;
    int arr[]={2,-3,-4,-2,7,8,9,-10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"enter the value of window:";
    cin>>k;
    for(long long int i=0; i<k-1; i++)
    {
        q.push(arr[i]);
    }
    for( long long int i=k-1; i<size; i++)
    {
        q.push(arr[i]);
        display(q,ans);
        q.pop();
    }

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}