// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = size(nums);
    int k = 0;

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

int main() {
    vector<int> nums = {1, 1, 2};

    int output = removeDuplicates(nums);

    auto it = nums.begin();

    while (it < nums.begin() + output) {
        cout << *it << ' ';
        ++it;
    }
}
