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
    
    void dfshelper(T node, map<T,bool>& visited)
    {
     visited[node]=true;
     cout<<node<<" ";
     for(T neighbour: adj[node]){
         if(!visited[neighbour])
         dfshelper(neighbour,visited);
     }
        
    }
    
    
    
    void dfs(T src){
        map<T,bool> visited;
        dfshelper(src,visited);
        cout<<"endl";
        int conn=1;
        for(auto i: adj){
            T pm = i.first;
            if(!visited[pm]){
                dfshelper(pm,visited);
                conn++;
            }
        }
        cout<<endl;
        cout<<"Number of conected components are "<<conn<<endl;
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
    G.dfs("Putin");
    // G.displayadj();
    return 0;
}
