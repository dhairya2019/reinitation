#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
using namespace std;

// void transfer(stack<int>& s1, stack<int>& s2, int n){
//     for(int i=0;i<n;++i){
//     s2.push(s1.top());
//     s1.pop();
//     }
// }
// void reverseStack(stack<int>& s1){
//     stack<int> s2;
//     int size = s1.size();
//     for(int i=0;i<size;++i){
//         int x = s1.top();
//         s1.pop();
//         transfer(s1,s2, size-i-1);
//         s1.push(x);
//         transfer(s2,s1,size-i-1);
//     }
// }
void insertatbottom(stack<int>& s, int x){
    if(s.empty()){
        s.push(x);
        return;
    } 
    int p = s.top();
    s.pop();
    insertatbottom(s,x);
    s.push(p);
}

void reverseStack(stack<int>& s){
    if(s.empty()) return;
    
    int x = s.top();
    s.pop();
    reverseStack(s);
    insertatbottom(s,x);
    
}

int main(){
    stack<int> s;
    s.push(4);
    s.push(2);
    s.push(3);
    s.push(1);
    
    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    
    
    return 0;
}
