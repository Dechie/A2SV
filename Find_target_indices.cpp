class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        for (int i = 0; i <= nums.size() - 1; i++)
        {
            for (int j = i+1; j <= nums.size() -1; j++)
            {
                if (nums[i] > nums[j])
                {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
        
        vector<int> show(nums.size()); int count = 0;
        
        for (int i = 0; i <= nums.size() - 1; i++)
        {
            for (int j = count; j <= nums.size()-1; j++)
            {
                if (nums[i] == target)
                {                            
                    show[j] = i;
                    count++;
                    break;
                } 
            }
            
        }
        
          

        show.resize(count);

        
        return show;
        
    }
};
