// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution {
public:
    int strStr(string haystack, string needle) {
        auto it1 = haystack.begin();
        auto it2 = needle.begin();

        while (it1 < haystack.end() && it2 < needle.end()) {
            if (*it1 == *it2)
                ++it2;
            else
                it2 = needle.begin();

            ++it1;
        }

        return it2 == needle.end() ? (it1 - haystack.begin() - needle.length()) : -1;
    }
};