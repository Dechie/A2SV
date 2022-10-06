class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int limit = nums.size();
        
        vector <int> copy(limit);
        
        for (int i = limit; i < limit; i++)
            nums[i] = 0;
        
        for (int i = 0; i < limit; i++)
        {
            for (int j = 0; j < limit; j++)
            {
                if (nums[j] < nums[i])
                {
                     copy[i]++;
                }
                   
            }
        }
        
        for (int i = 0; i < limit; i++)
            nums[i] = copy[i];      
             
         return copy;
        }
       
};
