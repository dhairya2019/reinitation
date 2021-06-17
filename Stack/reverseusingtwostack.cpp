#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
using namespace std;

int main(){
    stack<char> s1;
    stack<char> s2;
    for(int i=65;i<70;i++){
        s1.push(i);
    }
    while(!s1.empty()){
        int data = 0;
        data = s1.top();
        s1.pop();
        s2.push(data);
    }
    while(!s2.empty()){
        cout<<s2.top()<<endl;
        s2.pop();
    }
    
    
    return 0;
}
