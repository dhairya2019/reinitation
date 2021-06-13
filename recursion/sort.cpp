#include<iostream>
using namespace std;
bool isSorted(int *a, int n){
    if(n==0 || n==1){
        return true;
    }
    if(a[0]<a[1] && isSorted(a+1,n-1)){
        return true;
    }
    return false;
}
int main()
{
    int arr[5]={1,2,6,4,5};
    cout<<isSorted(arr,5)<<endl;
    return 0;
}
