class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>>mp;
         vector<vector<string>>ans;
        for(int i=0;i<s.size();i++)
        {
              int n=s[i].length();
            string p=s[i];
            sort(p.begin(),p.end());
            mp[p].push_back(s[i]);
          }
        
        for(auto it:mp)
         {ans.push_back(it.second);
            }
        return ans;
    }
        
};