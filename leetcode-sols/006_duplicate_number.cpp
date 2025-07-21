class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0], fast = nums[0];
        //using do-while loop to detect cycle
        do{
            slow =  nums[slow];
            fast = nums[nums[fast]];
        } while(slow!= fast);

        slow = nums[0];
        while(slow!= fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
