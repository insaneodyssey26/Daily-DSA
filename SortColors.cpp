class Solution {
public:
    void sortColors(vector<int>& nums) {
        int st = 0, end = nums.size() - 1;
        for (int i = 0; i <= end;) {
            if (nums[i] == 0) {
                swap(nums[i], nums[st]);
                st++;
                i++;
               
            } else if (nums[i] == 2) {
                swap(nums[i], nums[end]);
                end--;
            } else {
                i++;
            }
        }
    }
};