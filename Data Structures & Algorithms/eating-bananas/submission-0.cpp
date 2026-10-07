class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        //bananas per hour left right
        int k = (right + left) / 2;
        int mid = k;
        while (left <= right) {
            k = (left + right) / 2;
            long long time = 0;
            for (int i = 0; i < piles.size(); i++){
                time += ceil((double) piles[i] / k);
            }

            if (time <= h) {
                mid = k;
                right = k - 1;
                
            } else {
                left = k + 1;
            }
            
        }
        return mid;
    }
};
