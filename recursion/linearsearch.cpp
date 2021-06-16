#include<iostream>
using namespace std;

int linear(int * arr, int low, int high,int key){
  if(arr[low]==key){
      return low;
  }
  
  else{
      return linear(arr,low+1,high,key);
  }
  
  return -1;
    
}

int main()
{
   int arr[] = {1,6,3,4,2,8};
   int n= sizeof(arr)/sizeof(arr[0]);
   int low=0;
   int high=n-1;
   int key=2;
   int result = linear(arr,low,high,key);
   if(result==-1) {cout<<"The key is not found"<<endl;}
   else {cout<<"The key is found at "<<result<<"th index"<<endl;}
    return 0;
}
