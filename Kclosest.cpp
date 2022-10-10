class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> final(k, vector<int>(2));
        vector<float>save(points.size()); 
        
        for (int i = 0; i <= points.size()-1; i++)
        {
            save[i] = sqrt((pow(points[i][0], 2) + pow(points[i][1], 2)));
            
            
        }
        for (int i = 0; i <= points.size() -1; i++ )
        {
            for (int j = i+1; j <= points.size() - 1; j++)
            {
                if (save[i] > save[j])
                {
                    //swap(save[i], save[j]);
                    swap(points[i][0], points[j][0]);
                    swap(points[i][1], points[j][1]);
                }
            }
        }

       
        int i = 0;
        while(i < k)
        {          
            final[i][0] = points[i][0];
            final[i][1] = points[i][1]; 
             
            i++;        
        }
        
        return final;
        
    }
};
