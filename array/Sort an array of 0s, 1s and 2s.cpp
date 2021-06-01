class Solution
{
    public:
    int p=0,q=0,r=0;
    void sort012(int a[], int n)
    {
        
        for(int i=0;i<n;i++){
           if(a[i]==0) p++; 
           else if(a[i]==1) q++;
           else if(a[i]==2) r++;
            
        }
        int i=0;
        while(p>0){
            a[i++]=0;
            p--;
        }
        
        while(q>0){
            a[i++]=1;
            q--;
        }
        
        while(r>0){
            a[i++]=2;
            r--;
        }
        
    }
    
};
