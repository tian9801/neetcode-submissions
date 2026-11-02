class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // sorted in increasing order
        int l = 0;
        int r = numbers.size() - 1;

        int index1 = 0;
        int index2 = 0;

        while (l < r) {
            if (numbers[r] + numbers[l] == target) {
                index1 = l + 1;
                index2 = r + 1;
            }
            if (numbers[r] + numbers[l] < target) {
                l++;
            } else {
                r--;
            }
        }
        vector<int> sumPair = {index1, index2};
        return sumPair;
        
    }
};
