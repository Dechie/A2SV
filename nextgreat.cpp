class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int size1 = nums1.size(), size2 = nums2.size();
        stack<int> greater[size1];
            greater[i].push(nums2[k]);
                           break; 
        for (int i = 0; i < size1; i++)
        {
            for (int j = 0; j < size2; j++)
            {
                if (nums2[j] == nums1[i])
                {
                    for (int k = j+1; k < size2; k++)
                    {
                        if(nums2[k] > nums1[i])
                        {
                       
                        }                     
                    }
                }
            }
        }
        
        vector <int> value(size1);
        int x;
        for (int i = 0; i < size1; i++)
        {
            if (!greater[i].empty())
            {
               x =  greater[i].top();
                value[i] = x;
            }
                //value[i] = greater[i];
            else
                value[i] = -1;
        }
        
        return value;
    }
};
