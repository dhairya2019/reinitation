#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
template <typename T>
class Stack{
private:
vector<T> v;
public:
    void push(T data){
        v.push_back(data);
    }
    
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!empty()){
        v.pop_back();
        }
    }
    
    T top(){
        return  v[v.size()-1];
    }
};
int main()
{
    Stack<string> s;
    vector<string> v1;
    char a[][10]={"apple","mango","guava"};
    for(int i=0;i<3;i++)
    {
        v1.push_back(a[i]);
    }
    for(auto t=v1.begin(); t!=v1.end(); ++t){
        s.push(*t);
    }
    
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
   
    return 0;
}
