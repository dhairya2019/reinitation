#include <stdio.h>
#include<iostream>
using namespace std;
    int binary(int *arr , int low, int high,int key){
        if(low<=high){
        int mid =(low+high)/2;
        if(key==arr[mid])return mid;
        if(key>arr[mid]) return binary(arr,mid+1,high,key);
        if(key<arr[mid]) return binary(arr,low,mid-1,key);
    }
    return -1;
    
    }

int main()
{
    //perform binary search using recursive approach
    //mid=(low+high)/2   
    //if(key>arr[mid])
    //first= mid+1;
    //else id(key<arr[mid])
    //last=mid-1;
    //else return -1;

  int arr[]={1,4,6,7,11,12};
  int n= sizeof(arr)/sizeof(arr[0]);
  int low=0;
  int high= n-1;
  int key=15;
  int result = binary(arr,low,high,key);
  if(result==-1) cout<<"The element is not present in the array"<<endl;
  else{cout<<"The element is found and present at "<<result<<"th position"<<endl;}
  return 0;
}
