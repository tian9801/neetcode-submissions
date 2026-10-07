class Solution {
    public int maxProfit(int[] prices) {
        int max = 0;
        int l = 0;
        int r = 0;

        for (int i = 0; i < prices.length; i++) {
            if (prices[i] < prices[l]) {
                l = i;
            }



            if (prices[i] - prices[l] > max) {
                max = prices[i] - prices[l];
            }
        }
        
        return max;
    }
}
