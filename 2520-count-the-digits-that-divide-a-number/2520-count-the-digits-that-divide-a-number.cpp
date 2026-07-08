class Solution {
public:
    int countDigits(int num) {

        int k=num;
        int cnt=0;

        while (k>0)
        {
            int r=k%10;
            if (num%r==0)
            {
                cnt++;
            }
            k/=10;
        }
        return cnt;
        
    }
};