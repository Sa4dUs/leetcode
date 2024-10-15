// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = size(nums);

        if (n < 3)
            return n;

        auto it = nums.begin() + 2;
        auto aux = it;

        while (it < nums.end()) {
            if (*it != *(aux - 2)) {
                *aux = *it;
                ++aux;
            }

            ++it;
        }

        return aux - nums.begin();
    }
};