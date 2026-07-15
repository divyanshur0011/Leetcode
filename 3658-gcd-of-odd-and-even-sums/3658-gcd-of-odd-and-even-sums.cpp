class Solution {
public:

    int gcdOfOddEvenSums(int n) {

        int o=1;
        int e=2;
        int oo=0;
        int ee=0;

        while (n>0)
        {
            oo=oo+o;
            ee=ee+e;

            o=o+2;
            e=e+2;
            n--;
        }
        int ans=__gcd(ee,oo);
        return ans;
        
    }
};