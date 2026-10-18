class Solution {
public:
    string longestPalindrome(string s) {
        int max = 0;
        string longest;

        for (int i = 0; i < s.size(); i++) {
            char curr = s[i];
            int l = i - 1;
            int r = i + 1;

            int count = 1;
            std::deque<char> str = {curr};

            // Odd-length palindromes
            while (l >= 0 && r < s.size()) {
                if (s[l] == s[r]) {
                    count += 2;
                    str.push_back(s[r]);
                    str.push_front(s[l]);
                    l--;
                    r++;
                } else {
                    break;
                }
            }

            if (count > max) {
                max = count;
                longest = std::string(str.begin(), str.end());
            }

            // Even-length palindromes
            l = i;
            r = i + 1;
            count = 0;
            str.clear();

            while (l >= 0 && r < s.size()) {
                if (s[l] == s[r]) {
                    count += 2;
                    str.push_back(s[r]);
                    str.push_front(s[l]);
                    l--;
                    r++;
                } else {
                    break;
                }
            }

            if (count > max) {
                max = count;
                longest = std::string(str.begin(), str.end());
            }
        }

        return longest;
    }
};