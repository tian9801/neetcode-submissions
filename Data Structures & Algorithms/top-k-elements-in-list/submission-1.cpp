class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> que;

        std::vector<int> freq;
        unordered_map<int, int> count;
        for (int i = 0; i < nums.size(); i++ ){
            count[nums[i]]++;
        }
        for (auto p : count) {
            que.push({p.second, p.first});
        }
        for (int i = 0; i < k; i++) {
            freq.push_back(que.top().second);
            que.pop();
        }
        return freq;
    }
};
