class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max = 0;
        int right = 0;
        int left = 0;
        int count = 0;
        std::unordered_set<char> seen;
        while (right < s.size()) {
            if (seen.find(s[right]) == seen.end()) {
                seen.insert(s[right]);
                right++;
                count++;
                if (count > max) {
                    max = count;
                }
            } else {
                
                while(s[left] != s[right]) {
                    seen.erase(s[left]);
                    left++;
                    count--;
                }
                seen.erase(s[left]);
                left++;
                count--;
            }
            
        }
        return max;

    }
};
