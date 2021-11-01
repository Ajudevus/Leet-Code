class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> triplet_vec;
        set<vector<int>> triplet_set;
        //Using a two pointer approach 
    
      
        //sort the array 
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++)
        {
            int l=i+1; 
            int r=nums.size()-1;
            while(l<r)
            {
            if(nums[i]+nums[l]+nums[r]==0)
            {
                vector<int> temp={nums[i],nums[l],nums[r]};
                triplet_set.insert(temp);
                l++;r--;
                
            }
            else if(nums[i]+nums[l]+nums[r]>0)
                r--;
            else
                l++;
            }
        }
        for(auto i=triplet_set.begin();i!=triplet_set.end();i++)
            triplet_vec.push_back(*i);
        return triplet_vec;
    }
};
