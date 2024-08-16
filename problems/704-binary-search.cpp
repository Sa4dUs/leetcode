// https://leetcode.com/problems/binary-search/description/

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int l = 0, r = size(nums) - 1;

    while (l <= r) {
        int m = (l + r)/2;

        if (target > nums[m]) {
            l = m + 1;
        } else if (target < nums[m]) {
            r = m - 1;
        } else {
            return m;
        }
    }

    return -1;
}

int main() {
    vector<int> nums  = {-1, 0, 3, 5, 9, 12};
    int target = 9;

    int output = search(nums, target);
    cout << output;
}
