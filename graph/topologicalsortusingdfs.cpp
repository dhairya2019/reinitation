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
    
    void dfshelper(T node, map<T,bool>& visited, list<T>& ordering)
    {
     visited[node] = true;
     cout<<node<<endl;
     for(T neighbour: adj[node]){
         if(!visited[neighbour]){
             cout<<"done"<<endl;
             dfshelper(neighbour,visited,ordering);
         }
     }
     
     ordering.push_front(node);
        
    }
    
    void topologicalsort(){
        map<T, bool> visited;
        list<T> ordering;
        
        for(auto i: adj){
            T node = i.first;
            if(!visited[node]){
                dfshelper(node,visited,ordering);
            }
        }
        
        for(T element: ordering){
            cout<<element<<" -> ";
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
    G.topologicalsort();
    // G.displayadj();
    return 0;
}
