class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()<1) return INT_MIN;
        int maxSum =  nums[0];
        int inProgressMaxSum = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            inProgressMaxSum = max(inProgressMaxSum+nums[i], nums[i]);
            maxSum =max(inProgressMaxSum, maxSum);
        }
        return maxSum;
    }
};
