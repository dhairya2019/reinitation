#include<iostream>
using namespace std;

int power(int a , int b){
    //Function to calculate power
    if(b==0)
    return 1;
    if(b==1)
    return a;
    else
    return a*power(a,b-1);

    
}

int main()
{
    int a=0,b=0;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
    return 0;
}
