class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int l=0;
        int sl=0;
        for (int i=0;i<nums.size();++i)
        {
            if (nums[i]>l)
            {
                sl=l;
                l=nums[i];
            }
            else if (sl<nums[i])
            {
                sl=nums[i];

            }
        }
        return (l-1)*(sl-1);
        
    }
};