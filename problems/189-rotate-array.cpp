// https://leetcode.com/problems/rotate-array/description/

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = size(nums);
    k %= n;

    int cov = 0;
    int start = 0;

    while (cov < n) {
        int i = start;
        int aux = nums[i], aux2;

        do {
            i = (i + k) % n;
            aux2 = nums[i];
            nums[i] = aux;
            aux = aux2;
            ++cov;
        } while (i > start);

        ++start;
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    auto it = nums.begin();

    while (it != nums.end()) {
        cout << *it << ' ';
        ++it;
    }
}
