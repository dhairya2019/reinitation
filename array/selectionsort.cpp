#include <stdio.h>
#include<iostream>
#include<climits>
using namespace std;



int main()
{
   int n=0,key=0;
   cin>>n;
   int arr[1000];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
  //Selection Sort
//   use two index
//   i start from 0 and j from i to n-1
//   traverse the j and fund the min elemement
//   swap i with with the jth element 
//   increment i and again traverse j from i to n-1

   for(int i=0;i<n-1;i++){
       int min_element =i;
       for(int j=i;j<n;j++){
           
           
          if(arr[j]<arr[min_element]) min_element=j;
          
       }
       swap(arr[i],arr[min_element]);
       
   }
   
   
   for(int i=0;i<n;i++){
       cout<<arr[i];
   }
    
    return 0;
   
}
