class Solution {
public:
    int minDeletions(string s) {
                vector<int>v(26);
        for(int i = 0 ; i < s.length() ; i++)
        {
            v[s[i] - 'a'] ++;
        }
         sort(v.rbegin(),v.rend());
         int f=v[0];
        int ans=0;
         for(auto a: v) {
             if( a > f)
             {
                    if(f>0)
                        ans  += a-f;
             else
                 ans += a;
             }
         f=min(f-1,a-1);
    }
        return ans ;
    }
};