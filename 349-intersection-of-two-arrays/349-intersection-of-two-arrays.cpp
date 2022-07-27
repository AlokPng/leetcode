class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
         set<int>s1(nums1.begin(), nums1.end());
        vector<int>v;
        
        for (int i = 0; i < nums2.size(); i++) {
            auto it = s1.find(nums2[i]);
            if (it != s1.end()) {
                v.push_back(nums2[i]);          
                s1.erase(it);
            }
        }
        
        return v;
    }
    
};