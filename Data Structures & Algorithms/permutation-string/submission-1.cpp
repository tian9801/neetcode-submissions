class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int l = 0;
        int r = n - 1;
        std::unordered_map<char, int> s1Map;
        for (int i = 0; i < s1.size(); i++) {
            s1Map[s1[i]]++;
            
        }
        
        while (r < s2.size()) {
            bool yea = true;
            std::unordered_map<char, int> s2Map;

            for (int i = l; i <= r; i++) {
                s2Map[s2[i]]++;
            }

            for (int i = l; i <= r; i++) {
                if (s1Map[s2[i]] != s2Map[s2[i]]) {
                    yea = false;
                }
            }

            if (yea == true) {
                return true;
            }
            l++;
            r++;
        }


        return false;
        

    }
};
