#include<bits/stdc++.h>
#include<list>
using namespace std;
class graph
{
  int V;
  list<int> *l;
  public: 
  graph(int v)
  {
      V=v;
      l= new list<int>[V];
  }
  
  void addedge(int u, int v, bool bidir=true)
  {
      l[u].push_back(v);
      if(bidir)
      {
          l[v].push_back(u);
      }
  }
  
  void displayadj()
  {
      for(int i=0;i<V;i++){
          for(auto val: l[i])
          {
              cout<<val<<", ";
          }
          cout<<endl;
      }
  }
  
};


int main()
{
    graph G(5);
    G.addedge(0,1);
    G.addedge(0,4);
    G.addedge(4,3);
    G.addedge(1,4);
    G.addedge(1,2);
    G.addedge(2,3);
    G.addedge(1,3);
    G.displayadj();
    return 0;
}
