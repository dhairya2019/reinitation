#include <stdio.h>
#include<iostream>
#include<climits>
using namespace std;
int main()
{
   int n=0;
   cin>>n;
   int arr[1000];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
   int large = INT_MIN;
   int mine = INT_MAX;
   
  for(int i=0 ; i<n ; i++){
      large = max(large, arr[i]);
      mine = min(mine , arr[i]);
    //   if(large<arr[i])
    //   large=arr[i];
    //   if(min>arr[i])
    //   min=arr[i];
  }
   
   cout<<"largest is: "<<large<<endl;
   cout<<"minimum is: "<<mine<<endl;
    
    return 0;
   
}
