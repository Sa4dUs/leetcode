// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = size(nums);
        int k = 0;
        set<int> s;

        auto it = nums.begin() + 1;
        auto lvi = it;

        while (it < nums.end()) {
            if (*it != *(it - 1)) {
                *lvi = *it;
                ++lvi;
            }

            ++it;
        }

        return lvi - nums.begin();
    }
};