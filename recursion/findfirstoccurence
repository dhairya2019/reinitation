#include<iostream>
using namespace std;

int find(int *arr, int low, int high, int key){
 if(arr[low]==key){
     return low;
 }
 
 else{
     return find(arr,low+1,high,key);
 }
    
}

int main()
{
    
  int arr[]={1,4,6,7,11,7,12};
  int n= sizeof(arr)/sizeof(arr[0]);
  int key=6;
  int low=0;
  int high=n-1;
  cout<<find(arr,low,high, key)<<endl;
  return 0;
}
