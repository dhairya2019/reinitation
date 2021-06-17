#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
using namespace std;

int main(){
    stack<char> s1;
    char arr[100]={0};
    int i=0;
    
    //Inserting characters into stack for population
    for(int j=65;j<70;j++){
        s1.push(j);
    }
    
    
    //Removing top element and storing it in array till stack becomes empty
    while(!s1.empty()){
        arr[i]=s1.top();
        // cout<<arr[i]<<endl;
        s1.pop();
        // cout<<s1.top()<<endl;
        i++;
    }
    
    //Pushing array elements as the last element when popping will be the first element of array
    //And inserting them in the same stack will add the elements in reverse order
    for(int k=0;k<=i;k++){
        s1.push(arr[k]);
    }
    
    
    //Printing the elements in new stack
    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s1.pop();
    }
    
    return 0;
}
