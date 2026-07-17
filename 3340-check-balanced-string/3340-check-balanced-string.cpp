class Solution {
public:
    bool isBalanced(string num) {
        int e=0;
        int o=0;

        for (int i=0;i<num.size();i=i+2)
        {
            e=e+(num[i]-'0');
            
        }
        for (int i=1;i<num.size();i=i+2)
        {
            o=o+(num[i]-'0');
        }

        return o==e;
        
    }
};