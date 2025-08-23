#include<iostream>
#include<vector>
using namespace std;

int main() {
    // adjacency matrix
    int vertex, edge;
    
    cin>>vertex>>edge;
    // undirected weighted graph
    vector<vector<int>> AdjMat(vertex, vector<int>(vertex,0));

    
    int u, v, weight;

    for(int i=0; i<edge; i++){
        cin>>u>>v>>weight;
        AdjMat[u][v] = weight;
        AdjMat[v][u] = weight;
    }

    // print graph matrix
    for(int i=0; i<vertex; i++){
        for (int j = 0; j < vertex; j++)
        {
            cout<<AdjMat[i][j];
        }
        cout<<endl;
        
    }
    return 0;
}