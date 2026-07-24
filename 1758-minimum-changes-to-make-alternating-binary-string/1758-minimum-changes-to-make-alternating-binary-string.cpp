class Solution {
public:
    int minOperations(string s) {

        int o=0;
        int z=0;

        for (int i=0;i<s.size();++i)
        {
            if (s[i]=='0' && i%2==0)
            {
                z++;
            }
            else if (s[i]=='1' && i%2==1)
            {
                z++;
            }

            if (s[i]=='1' && i%2==0)
            {
                o++;
            }
            else if (s[i]=='0' && i%2==1)
            {
                o++;
            }
        }
        int q=max(o,z);
        int res=s.size()-q;
        return res;
        
    }
};