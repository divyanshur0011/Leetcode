class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {

        if(nums.size()<3)
        {
            return -1;
        }
        else
        {
            int m=INT_MIN;
            int s=INT_MAX;
            for (int i:nums)
            {
                if (i>m)
                {
                    m=i;
                }
                if (i<s)
                {
                    s=i;
                }
            }
            for (int i:nums)
            {
                if (i!=s && i!=m)
                {
                    return i;
                    break;
                }
            }
        }
        return -1; 
    }
};