#include<iostream>
#include<vector>
using namespace std;

int main(){

    int vertex, edges;
    cout<<"Enter vertex and edges\n";
    cin>>vertex>>edges;

    vector<vector<bool>> adjMatrix(vertex, vector<bool>(vertex,0));
    int u, v;

    for(int i=0; i<edges; i++){
        cin>>u>>v;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }


    // print matrix
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout<<adjMatrix[i][j] ;
        }
        cout<<endl;
        
    }
    
    return 0;
}