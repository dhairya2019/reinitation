#include<bits/stdc++.h>
int Solution::solve(string A) {
    stack<char> s;
    int n = A.size();
    int i=0;
    for(i=0;i<n;i++){
        if(A[i]=='('){
            s.push('(');
        }
        else{
            if(A[i]==')' && s.empty()) break;
            if(A[i]==')' && !s.empty()){
                s.pop();
        }
        }
    }
    if(s.empty() && A[i]=='\0') return 1;
    else return 0;
    
    
    
    
    return 0;
}
