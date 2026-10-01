class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;

        int left = 0;

        for (int i = 0; i < prices.size(); i++) {
            
            if (prices[i] < prices[left]) {
                left = i;
            }
            


            if (prices[i] - prices[left] > max) {
                max = prices[i] - prices[left];
            }
        }


        return max;
    }
};
