class Solution {
public:
    int titleToNumber(string columnTitle) {
        int cnt=0;
        int n=0;
        for (char c:columnTitle)
        {

           
            if(n==0)
            {
                cnt=cnt+(c-'A')+1;
                n++;
            }
            else
            {
                cnt=26*cnt+(c-'A')+1;
            }
        }
        return cnt;
    }
};