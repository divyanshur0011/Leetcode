class Solution {
public:
    string reverseByType(string s) {

        int l=0;
        int r= s.size()-1;

        while (l<r)
        {
           if (!isalpha(s[l]) )
           {
            l++;
           }
           else if (!isalpha(s[r]))
           {
            r--;
           }
           else
           {
            swap(s[l],s[r]);
            l++;
            r--;
           }

        }
        int l1=0;
         int r1=s.size()-1;
        while (l1<r1)
        {
           if (isalpha(s[r1]))
           {
            r1--;
           }
           else if (isalpha(s[l1]) )
           {
            l1++;
           }
           else
           {
            swap(s[l1],s[r1]);
            l1++;
            r1--;
           }

        }

        return s;
        
    }
};