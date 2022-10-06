class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int limit = nums.size(), expand, count;
        expand = limit * 2;
        nums.resize(expand);
        
        
        
        for (int i = 0; i < expand; i++)
        {

            count = 0;
    
            for (int j = 0; j < limit; j++)
            {
     
                if (nums[j] < nums[i])
                {
                     cout<<nums[j]<<" ";
                     count++;
                }
                 nums[i+limit] = count;
                  
            }
            cout<<endl;
            if(i == limit)
                break;
        }
        
        cout<<"_________________"<<endl;
        for (int i = 0; i < expand; i++){
            nums[i] = nums[i+limit];
            if(i == limit)
                break;
            if(i < limit)
                cout<<nums[i+limit]<<" ";
        }
        cout<<"\n_________________"<<endl;
        cout<<endl<<"now: "<<endl;
            
        for (int i = 0; i < limit; i++)
          cout<<nums[i];
          cout<<endl;          
         nums.resize(limit);

         cout<<endl<<"after resize: ";
         for (int i = 0; i < limit; i++)
            cout<<nums[i]<<" ";
        cout<<endl;
            return nums;
        }
     
