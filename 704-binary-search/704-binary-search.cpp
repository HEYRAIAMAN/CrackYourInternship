class Solution {
public:
    int search(vector<int>& nums, int target) { 
        int n = sizeof(nums)/sizeof(nums[0]);
        int first = 0;
        int last = nums.size()-1;

        while(first<=last){
            int mid = (first + last)/2;
            if (target == nums[mid]){
                return mid;}
            else if (nums[mid] < target){
                first = mid + 1;}
            else
                last = mid-1;
                
                
        }
        return -1;
        
        
    }
};