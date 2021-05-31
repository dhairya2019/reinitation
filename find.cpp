#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
   int n=0,key=0;
   cin>>n;
   cin>>key;
   int arr[1000];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
   for(int i=0;i<n;i++){
       if(key==arr[i]){
           cout<<i<<endl;
       }
       else
       continue;
   }
    
    
    return 0;
   
}
