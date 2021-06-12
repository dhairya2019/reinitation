#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    
    char a[1000];
    string b;
    cin.getline(a,1000);
    //ccoooding
    int i=0;
    while(i<strlen(a)){
       if(a[i]==a[i+1]){ 
           i++;
           continue;
       }
       else{
          b += a[i]; 
          i++;
       }
    }
    
    cout<<b;
    
    
    return 0;
}
