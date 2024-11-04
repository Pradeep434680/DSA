#include<iostream>
#include<vector>
using namespace std;

// this graph is  undirected Weighted  graph
    // 0  0  4  0  10
    // 0  0  8  0  0
    // 4  8  0  0  7
    // 0  0  0  0  19
    // 10  0  7  19  0  

// make directed weighted and directed unweighted graph
int main()
{
    int vertex,edges;
    cout<<"enter the values of vertex and edges:";
    cin>>vertex>>edges;

    vector<vector<int> >AdjMat(vertex,vector<int>(vertex,0));
    int u,v,weight;
    for(int i=0; i<edges; i++)
    {
        cout<<"enter the edge position with their weight:";
        cin>>u>>v>>weight;

        AdjMat[u][v] = weight;
        AdjMat[v][u] = weight;

    }

    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
        {
            cout<<AdjMat[i][j]<<"  ";
        }
        cout<<endl;
    }
}