#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    
    char a[1000];
    int n=0;
    cin>>n;
    cin.get();
    int len=0;
    int largest=0;
    char largest_string[1000];
    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        len = strlen(a);
        if(len>largest){
            largest=len;
            strcpy(largest_string,a);
        }
    }
    cout<<"The largest string is "<<largest_string<<" and the length is "<<largest<<endl;
    
    return 0;
}
