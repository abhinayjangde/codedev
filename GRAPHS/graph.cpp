#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<stack>
using namespace std;
class Graph{
    int V;
    list<int> *l;
    bool isUndir;
    public:
    Graph(int V, bool isUndir = true){
        this->V=V;
        l = new list<int> [V];
        this->isUndir=isUndir;
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        if(isUndir)
            l[v].push_back(u);
    }
    void print(){
        for(int u=0; u<V; u++){
            list<int> neighbour = l[u];
            cout<<u<<" : ";
            for(auto i : neighbour){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    };
    void bfs(){
        // Time Complexity = O(v+e)
        queue<int> q;
        vector<bool> visited(V,false);
        q.push(0);
        visited[0]=true;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            cout<<u<<" ";
            for(auto v : l[u]){
                if(!visited[v]){
                    visited[v]=true;
                    q.push(v);
                }
            }
        }
    }
    void dfs(int u,vector<bool> &visited){
        visited[u]=1;
        cout<<u<<" ";
        for(auto v : l[u]){
            if(!visited[v]) dfs(v,visited);
        }
    }

    // Find All Paths for Directed Graph
    void pathHelper(int src,int dest, vector<bool> &visited, string &path){
        if(src==dest){
            cout<<path<<dest<<endl;
            return;
        }
        visited[src]=true;
        path+=to_string(src);
        for(int v : l[src]){
            if(!visited[v]){
                pathHelper(v,dest,visited,path);
            }
        }
        path.pop_back();
        visited[src]=false;
    }
    void printAllPaht(int src, int dest){
        vector<bool> visited(V,false);
        string path="";
        pathHelper(src,dest,visited,path);
    }
    void topoHelper(int i, vector<bool>&visted, stack<int> st){
        visted[i]=true;
        for(auto nbr : l[i]){
            if(!visted[nbr]){
                topoHelper(nbr,visted,st);
            }
        }
        st.push(i);
    }
    void topoSort(){
        vector<bool> visited(V,false);
        stack<int> st;
        for(int i=0; i<V; i++){
            if(!visited[i]){
                topoHelper(i,visited,st);
            }
        }
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
    }
};

int main(){
    Graph graph(6);
    graph.addEdge(2,3);
    graph.addEdge(3,1);
    graph.addEdge(4,0);
    graph.addEdge(4,1);
    graph.addEdge(5,0);
    graph.addEdge(5,2);
   
    //graph.printAllPaht(5,1); // TC = O(V+E)
    graph.topoSort();

    return 0;
}

