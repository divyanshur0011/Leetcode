class Solution {
public:
    bool judgeSquareSum(int c) {
        int n=sqrt(c);

        long long l=0;
        long long r=n;

        while (l<=r)
        {
            long long s=l*l+r*r;
            if (s==c)
            {
                return true;
            }
            else if (s>c)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return false;
        
    }
};