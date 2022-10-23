class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int sum = (n*(n+1)/2);
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                v.push_back(nums[i]);
                break;
            }
        }
        
        int s2=0;
        set<int>s(nums.begin(),nums.end());
        for(auto x:s)
        {
            s2+=x;
        }
        
        v.push_back(sum-s2);
        return v;
    }
};