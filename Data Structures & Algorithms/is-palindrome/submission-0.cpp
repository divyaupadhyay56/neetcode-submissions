class Solution {
public:
    bool isPalindrome(string s) {
        // Remove non-alphanumeric characters
        s.erase(remove_if(s.begin(), s.end(), [](char c) {
            return !isalnum(c);
        }), s.end());

        // Convert to lowercase
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        // Check if it's a palindrome
        string rev = s;
        reverse(rev.begin(), rev.end());

        return s == rev;
    }
};
