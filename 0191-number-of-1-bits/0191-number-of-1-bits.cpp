class Solution {
public:
    int hammingWeight(int n) {
        int o=0;
        while (n>0)
        {
            if (n%2==0)
            {
                
                n=n/2;
            }
            else
            {
                o++;
                n=(n-1)/2;
            }
            
        }
        return o;
        
    }
};