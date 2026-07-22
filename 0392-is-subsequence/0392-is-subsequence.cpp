class Solution {
public:
    bool isSubsequence(string s, string t) {

       
        int cnt =0;
        int l=0;int r=t.size();
        for (int i=0;i<s.size();++i)
        {
            
            while(l<r)
            {
                if (s[i]==t[l])
                {
                    cnt++;
                    l++;
                    break;
                }
                l++;
            }
        }
        bool res=(cnt==s.size());
        return res;
        
        
    }
};