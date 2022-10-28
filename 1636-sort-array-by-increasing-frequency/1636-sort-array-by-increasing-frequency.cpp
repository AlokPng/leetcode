bool mycmp(pair<int,int>a,pair<int,int>b)
{
    if(a.second<b.second)
        return true;
    else if(a.second>b.second)
        return false;
        else
            return a.first>=b.first;
}

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto it:nums)
        {
            mp[it]++;
        }
        vector<pair<int,int>>vp;
        for(auto it:mp)
        {
            vp.push_back({it.first,it.second});
        }
        
        sort(vp.begin(),vp.end(),mycmp);
        
        for(auto it:vp)
        {
            int x=it.first;
            int f=it.second;
            while(f--)
            {ans.push_back(it.first);}
            
        }
        return ans;
    }
};