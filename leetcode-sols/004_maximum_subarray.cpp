class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum =0, maxSum = INT_MIN;
        int n = nums.size();
        for( int i=0; i<n; i++)
        {
            currentSum += nums[i];
            maxSum = max(currentSum, maxSum);
            if(currentSum < 0)
            {
                currentSum =0;
            }
        }
        return maxSum;
    }
};
