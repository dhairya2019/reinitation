#include<iostream>
using namespace std;
int main()
{
   int arr[1000];
   int n=8;
   int cumsum[1000] = {0};
   cin>>arr[0];
   cumsum[0] = arr[0];
   for(int i=1;i<n;i++){
       
       cin>>arr[i];
       cumsum[i] = cumsum[i-1] + arr[i];
   }
   
  
   int msum=0;
   for(int i=0;i<n;i++){
       for(int j=i;j<n;j++){
           int csum=0;
           csum=cumsum[j]-cumsum[i-1];
           msum = max(msum,csum);
           
       }
   }
   cout<<msum<<endl;

    return 0;
}
