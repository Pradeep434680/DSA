#include<iostream>
#include<vector>
using namespace std;
// this is the undirected unweighted graph
//    0 1 0 1 0
//    1 0 1 0 0
//    0 1 0 0 1
//    1 0 0 0 1
//    0 0 1 1 0

int main()
{
    int vertex,edges;
    cout<<"enter the values of vertex and egdes:";
    cin>>vertex>>edges;
    vector<vector<bool> >AdjMat(vertex,vector<bool>(vertex,0));//method to make 2D matrix using vector
    int u,v;
    for(int i=0; i<edges; i++)
    {
        cout<<"enter the edges positions:";
        cin>>u>>v;
        AdjMat[u][v] = 1;
        AdjMat[v][u] = 1;

    }
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
        cout<<AdjMat[i][j]<<" ";

        cout<<endl;
    }
}