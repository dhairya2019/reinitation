#include<iostream>
using namespace std;

int grid(int n){
  if(n==1 || n==2 || n==3)
  return 1;
  else if(n==4)
  return 2;
  else
  return grid(n-1)+grid(n-4);
}

int main()
{
    
  int n=0;
  cin>>n;
  cout<<grid(n)<<endl;
 
  
  return 0;
}
