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
    
  void topsort(){
     queue<T> q;
     map<T, int> indegree;
     map<T, bool> visited;
     
     //INitializing visited and indegree to false and 0
     for(auto i: adj){
         T node = i.first;
         indegree[node]=0;
         visited[node] = false;
     }
     
     //Calculating and storing the values of indegree of each node
     for(auto i: adj){
         T u = i.first;
         for(T v: adj[u]){
             indegree[v]++;
         }
     }
     
     //finding nodes with 0 indegree to start with
     for(auto i: adj){
        T node = i.first;
        if(indegree[node]==0){
            q.push(node);
        }
     }
     
     //main algorithm
     while(!q.empty()){
         T node = q.front();
         q.pop();
         cout<<node<<" -> ";
         
         for(T neighbour: adj[node]){
             indegree[neighbour]--;
             if(indegree[neighbour]==0){
                 q.push(neighbour);
             }
         }
     }
  }
};

int main()
{
    graph<string> G;
    G.addedge("English","PL",false);
    G.addedge("Math","PL",false);
    G.addedge("PL","HTML",false);
    G.addedge("PL","Python",false);
    G.addedge("PL","JAVA",false);
    G.addedge("PL","JS",false);
    G.addedge("Python","WebDev",false);
    G.addedge("HTML","CSS",false);
    G.addedge("CSS","JS",false);
    G.addedge("JS","WebDev",false);
    G.addedge("JAVA","WebDev",false);
    G.addedge("Python","WebDev",false);
    G.topsort();
    // G.displayadj();
    return 0;
}
