#include<iostream>
using namespace std;
int fib(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 1;
    }
    else
    return fib(n-1)+fib(n-2);
}

int main()
{
  int n=0;
  cin>>n;
  int * arr = new int[100];
  for(int i=1;i<=n;i++){
      arr[i]=fib(i);
      cout<<arr[i]<<" ";
  }
  
  delete [] arr;
  

    return 0;
}
