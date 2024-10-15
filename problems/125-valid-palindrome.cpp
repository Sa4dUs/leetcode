// https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        auto it1 = s.begin() - 1;
        auto it2 = s.end();

        while (it1 <= it2) {
            do ++it1; while (!isalpha(*it1) && it1 <= it2);
            do --it2; while (!isalpha(*it2) && it1 <= it2);
            if (it1 > it2) break;
            if (tolower(*it1) != tolower(*it2)) return false;
        }

        return true;
    }
};