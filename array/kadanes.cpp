#include<iostream>
using namespace std;
int main()
{
   int arr[1000];
   int n=9;
   
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
  
   int msum=0;
   int csum=0;
   for(int i=0;i<n;i++){
      if(csum+arr[i]>0){
          csum = csum+arr[i];
      }
      if(csum>msum){
          msum=csum;
      }
   }
   cout<<msum<<endl;

    return 0;
}
