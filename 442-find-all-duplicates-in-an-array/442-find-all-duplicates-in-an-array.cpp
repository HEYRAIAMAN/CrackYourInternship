class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;++i){
            int indx= abs(nums[i])-1;
            if(nums[indx]<0)
                res.push_back(indx+1);
            else
               nums[indx]=nums[indx]*-1;
        }
        
        return res;
        
    }
};