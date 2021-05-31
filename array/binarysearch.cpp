#include <stdio.h>
#include<iostream>
#include<climits>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]>key) high=mid-1; 
        else 
        low = mid+1;
    }

    return -1;
}

int main()
{
   int n=0,key=0;
   cin>>n;
   cin>>key;
   int arr[1000];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
   
    int index= binarysearch(arr,n,key);
    cout<<index<<endl;
   
   
    
    return 0;
   
}
