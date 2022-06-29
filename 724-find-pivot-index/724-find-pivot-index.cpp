class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int leftSum = 0;
        int rightSum = 0;
        int ans = -1;
        int n=nums.size();
        for(int i = 1 ; i < n ; i++) {
            rightSum += nums[i];
        }
        
        for(int i = 1 ; i < n ; i++) {
            if(leftSum == rightSum) {
                ans = i-1;
                break;
            }
            else {
                rightSum -= nums[i];
                leftSum += nums[i-1];
            }
            if(i == n-1) {
                rightSum = 0;
            }
        }
        
        if(ans == -1 && leftSum == rightSum) {
            ans = n-1;
        }
        return ans;
    }
        
    
};