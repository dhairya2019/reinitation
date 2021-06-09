#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void readline(char s[], int max, char delim='$'){
    int i=0;
    char ch = cin.get();
    
    while(ch!=delim){
        s[i]=ch;
        i++;
        if(i==max-1){
            break;
        }
        ch=cin.get();
    }
    s[i]='\0';
    return;
}
int main()
{
 char s[1000];
//  cin>>s;
readline(s,1000,'$');

 cout<<s;
 
 return 0;
}
