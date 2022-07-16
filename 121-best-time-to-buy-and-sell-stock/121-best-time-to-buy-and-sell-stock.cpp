class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_p = 0;
        int min_p = prices[0];

   for(int i=1;i<prices.size();i++)
   {
       if(prices[i-1] < prices[i])
       {
           max_p = std::max(max_p,prices[i]-min_p);
       }
       else
           min_p = std::min(min_p,prices[i]);
   }

    return max_p;
}
};
        