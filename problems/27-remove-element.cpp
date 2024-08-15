// https://leetcode.com/problems/remove-element/description/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int n = size(nums);
    int k = 0;

    auto it = nums.begin();

    while (it < nums.end() - k) {
        if (*it == val) {
            k = 1;

            auto free_ptr = nums.end() - 1;

            while (free_ptr > it && *free_ptr == val) {
                ++k;
                --free_ptr;
            }

            swap(*free_ptr, *it);
        }

        ++it;
    }

    return n - k;
}

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int output = removeElement(nums, val);

    auto it = nums.begin();

    while (it < nums.begin() + output) {
        cout << *it << ' ';
        ++it;
    }
}
