class Solution {
public:
    string reorganizeString(string s) {
        //hashmap w every unique letter and vector of indices\
        
        // a-> [0]
        // x-> [1]
        // y-> [2, 3]

        // yy in a row -> put in front of a -> update y's queue
        
        std::unordered_map<char, int> hashMap;

        for (int i = 0; i < s.size(); i++) {
            hashMap[s[i]]++;
        }

        string result = "";
        char prev = '0';
        while(result.size() < s.size()) {
            char curr = '0';
            int count = 0;
            int max = 0;

            for(auto letter: hashMap) {
                count = letter.second;

                if (letter.first == prev) {
                    continue;
                }

                if (count > max) {
                    max = count;
                    curr = letter.first;
                }

                
            }
            
            if (max == 0) { 
                return "";
            }

            result += curr;
            prev = curr;
            hashMap[curr]--;
        }

        return result;

    }
};