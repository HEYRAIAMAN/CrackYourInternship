class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long int num = 0;
        int q = x;
        while(q!=0){
            num = num*10 + q%10;
            q /= 10;
        }
        return num ==x;
        
    }
};