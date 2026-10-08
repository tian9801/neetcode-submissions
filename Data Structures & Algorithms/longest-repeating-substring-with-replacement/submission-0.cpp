class Solution {
public:
    int characterReplacement(string s, int k) {
        std::unordered_map<char, int> fuck;
        int left = 0;
        int right = 0;
        int max = 0;
        while (right < s.size()) {
            fuck[s[right]]++;
            int maxCurr = 0;
            for (const auto& [cs, freq] : fuck) {
                maxCurr = std::max(maxCurr, freq);
            }

            while ((1 + right - left) - maxCurr> k) {
                // if current window length is greater than the amt of replacements we can have
                fuck[s[left]]--;;
                left++;
                maxCurr = 0;
                for (const auto& [cs, freq] : fuck) {
                    maxCurr = std::max(maxCurr, freq);
                }
            }
            
            max = std::max(max, right - left + 1);
            right++;
        }
        return max;
    }
};
