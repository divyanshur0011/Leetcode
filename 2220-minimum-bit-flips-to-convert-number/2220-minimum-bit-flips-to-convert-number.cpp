class Solution {
public:
    int minBitFlips(int start, int goal) {

        int cnt=0;

        while (start>0 || goal>0)
        {
            if (start%2==1 && goal%2==1)
            {
                
                start=(start-1)/2;
                goal=(goal-1)/2;

            }
            else if (start%2==0 && goal%2==0)
            {
                
                start/=2;
                goal/=2;
            }
            else if (start%2==0 && goal%2==1)
            {
                cnt++;
                start/=2;
                goal=(goal-1)/2;
            }
            else if (start%2==1 && goal%2==0)
            {
                cnt++;
                start=(start-1)/2;
                goal/=2;
            }
        }
        return cnt;
        
    }
};