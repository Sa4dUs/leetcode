// https://leetcode.com/problems/majority-element/description/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

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

int main() {
    vector<int> nums = {3, 2, 3};
    int output = majorityElement(nums);
    cout << output;
}
