#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
bool palindrome(char a[]){
    int i=0;
    int j=strlen(a)-1;
    while(i<j){
        if(a[i]==a[j]){
            i++;
            j--;
        }
        else
        return false;
    }
    return true;
}

int main()
{
    
    char a[1000];
    cin.getline(a,1000);
    if(palindrome(a)){
        cout<<"String is palindrom"<<endl;
        
    }
    else
    cout<<"String is not plaindrome"<<endl;
    
    return 0;
}
