class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;

        for (int i = 0; i < nums.size(); i++) {
            
            map[target-nums[i]] = i;
            std::cout << target-nums[i];
        
        }

        vector<int> pair;
        for (int i = 0; i < nums.size(); i++) {

            if (map.find(nums[i]) != map.end()) {
                int j = map[nums[i]];
                // if map contains this current nu mber, aka
                //this number is wanted as a difference
                std::cout << "we found the difference existing in hashmap";
                if (i != j) {
                    
                    pair = {i, j};
                    std::cout << "unique";
                    return pair;
                }
            }
        }


        return pair;
    }
};
