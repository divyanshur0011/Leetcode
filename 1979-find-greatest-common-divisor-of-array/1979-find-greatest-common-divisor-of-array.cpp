class Solution {
public:
    int findGCD(vector<int>& nums) {
        int l=INT_MIN;
        int s=INT_MAX;

        for (int i:nums)
        {
            if (i>l)
            {
                l=i;
            }

            if (i<s)
            {
                s=i;
            }
        }
        return __gcd(l,s);
        
    }
};