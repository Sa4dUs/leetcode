// https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        auto it = s.end() - 1;

        while (*it == ' ')
            --it;

        while (it >= s.begin() && *it-- != ' ')
            ++cnt;

        return cnt;
    }
};
