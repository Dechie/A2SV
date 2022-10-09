class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size(), temp;
        for (int i = 0; i < size; i++)
        {
            for (int j = i+1; j < size; j++)
            {
                if (nums[j] <= nums[i])
                {
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
};
