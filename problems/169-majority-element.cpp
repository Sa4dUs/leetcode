// https://leetcode.com/problems/majority-element/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cut = size(nums)/2;
        map<int, int> occ;

        auto it = nums.begin();

        while (it < nums.end()) {
            if (occ.find(*it) == occ.end())
                occ.insert({*it, 0});

            occ[*it]++;

            if (occ[*it] > cut)
                return *it;

            ++it;
        }

        return 0;
    }
};