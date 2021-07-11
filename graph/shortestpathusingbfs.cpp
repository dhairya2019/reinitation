#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<list>
#include<queue>
using namespace std;
template<typename T>
class graph{
    map<T,list<T>> adj;
    public:
    graph(){}
    void addedge(T u, T v, bool bidir=true)
    {
        adj[u].push_back(v);
        if(bidir)
        {
            adj[v].push_back(u);
        }
    }
    
    void displayadj()
    {
        for(auto index: adj)
        {
            cout<<index.first<<"-> ";
            for(T trail: index.second)
            {
                cout<<trail<<", ";
            }
            cout<<endl;
        }
        
    }
    
    void bfs(T src)
    {
        queue<T> Q;
        map<T,int> dist;
        map<T,T> parent;
        
        for(auto i: adj){
          dist[i.first]= INT_MAX;  
        }
        
        
        
        Q.push(src);
        dist[src]=0;
        parent[src]=src;
        while(!Q.empty()){
            T node = Q.front();
            // cout<<node<<" ";
            Q.pop();
            for(string neighbour: adj[node]){
                if(dist[neighbour]==INT_MAX){
                    Q.push(neighbour);
                    dist[neighbour]= dist[node]+1;
                    parent[neighbour] = node;
                }
            }
        }
        
        for(auto i: adj){
            T node = i.first;
            cout<<"Distance of node "<<src<<" from node "<<node<<" is "<<dist[node]<<endl;
        }
    }
    
    
};

int main()
{
    graph<string> G;
    G.addedge("Putin","Trump",false);
    G.addedge("Putin","Modi",false);
    G.addedge("Putin","Pope",false);
    G.addedge("Modi","Trump",true);
    G.addedge("Modi","Yogi",true);
    G.addedge("Yogi","Prabhu",false);
    G.addedge("Prabhu","Modi",false);
    G.bfs("Putin");
    // G.displayadj();
    return 0;
}
