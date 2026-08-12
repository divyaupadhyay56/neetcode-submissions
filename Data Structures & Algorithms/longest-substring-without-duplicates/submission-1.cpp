class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Map to store the last seen index of each character
        unordered_map<char, int> charMap;
        int res = 0;
        int start = 0; // Left boundary of the sliding window

        for (int end = 0; end < s.size(); end++) {
            // If character was seen inside the current window, move start
            if (charMap.find(s[end]) != charMap.end() && charMap[s[end]] >= start) {
                start = charMap[s[end]] + 1;
            }
            
            // Update or insert the character's newest index
            charMap[s[end]] = end;
            
            // Calculate the current valid window length
            res = max(res, end - start + 1);
        }
        return res;
    }
};
