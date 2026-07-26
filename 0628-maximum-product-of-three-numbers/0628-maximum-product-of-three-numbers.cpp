class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        int l=INT_MIN;
        int sl=INT_MIN;
        int tl=INT_MIN;
        int s=INT_MAX;
        int ss=INT_MAX;
        for (int i=0;i<nums.size();++i)
        {
            if (nums[i]>l)
            {
                tl=sl;
                sl=l;
                l=nums[i];
            }
            else if (sl<nums[i])
            {
                tl=sl;
                sl=nums[i];
            }
            else if (tl<nums[i])
            {
                tl=nums[i];
            }

            if (s>nums[i])
            {
                ss=s;
                s=nums[i];
            }
            else if (nums[i]<ss)
            {
                ss=nums[i];
            }
        }
        int mini=max(l*sl*tl,s*ss*l);
        return mini;

        
    }
};