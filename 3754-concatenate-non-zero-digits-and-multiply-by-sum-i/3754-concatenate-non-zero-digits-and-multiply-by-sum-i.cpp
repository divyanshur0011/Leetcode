class Solution {
public:
    long long sumAndMultiply(int n) {

        long long x=0;
        long long sum=0;
        long long k=n;

        while (k>0)
        {
            int r=k%10;
            sum=sum+r;
            if (r!=0)
                x=x*10+r;
            

            k=k/10;
            
        }
        long long j=x;
        long long ne=0;
        while (j>0)
        {
            int r=j%10;
            ne=ne*10+r;
            j=j/10;
        }
        long long ans=ne*sum;
        return ans;

        
        
    }
};