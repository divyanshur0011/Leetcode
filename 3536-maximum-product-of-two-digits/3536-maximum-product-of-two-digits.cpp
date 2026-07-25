class Solution {
public:
    int maxProduct(int n) {
        int rem=0;
        int pro=1;
        int l=0;
        int sl=0;
        
        while(n!=0)
        {
            rem=n%10;
            if (l<rem)
            {
                sl=l;
                l=rem;
            }
            else if (sl<rem)
            {
                sl=rem;
            }
            n=n/10;
           
        }
        return sl*l;
    }
};