// https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/

#include <iostream>
#include <vector>
using namespace std;

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

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};

    int output = removeDuplicates(nums);

    auto it = nums.begin();

    while (it < nums.begin() + output) {
        cout << *it << ' ';
        ++it;
    }
}
