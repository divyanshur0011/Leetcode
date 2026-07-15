class Solution {
public:
int GCD(int a,int b)
{
    int n=min(a,b);
    int c=1;

    for (int i=2;i<=n;++i )
    {
        if (a%i==0 && b%i==0)
        {
            c=i;
        }

    }
    return c;
}
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
        int ans=GCD(ee,oo);
        return ans;
        
    }
};