#include <stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    if(a.length()==b.length()){
        return a<b;
    }  
    
    return a.length()>b.length();
}

int main()
{
    string s[100];
    int n=3;
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    
    sort(s,s+n,compare);
    
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    

    return 0;
}
