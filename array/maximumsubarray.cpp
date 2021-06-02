#include<iostream>
using namespace std;
int main()
{
   int arr[1000];
   int n=8;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
  
   int msum=0;
   for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
           int csum=0;
           for(int k=i;k<j;k++){
               csum = csum+arr[k];
           }
           msum = max(msum,csum);
           
       }
   }
   cout<<msum<<endl;

    return 0;
}
