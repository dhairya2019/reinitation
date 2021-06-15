#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void bubblesort(int *arr, int n){
   //Base case
   if(n==1){
       return;
   }
    
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    
    return bubblesort(arr,n-1);
    
}


int main()
{
    
  int arr[]={1,4,6,7,11,12};
  int n= sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
  }
  return 0;
}
