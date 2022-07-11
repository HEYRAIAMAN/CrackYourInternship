class Solution {
public:
    void sortColors(vector<int>& nums) {
       int a0 = 0;
       int b1 = 0;
       int c2 = nums.size() - 1;
        
        while(b1 <= c2){
            switch(nums[b1]){
                case 0:
                    swap(nums[a0++], nums[b1++]);
                    break;
                case 1:
                    b1++;
                    break;
                case 2:
                    swap(nums[b1],nums[c2--]);
                    break;
            }
        
        }
        
    }
};