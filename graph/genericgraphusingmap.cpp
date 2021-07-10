#include<iostream>
#include<map>
#include<list>
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
    G.displayadj();
    return 0;
}
