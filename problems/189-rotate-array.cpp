// https://leetcode.com/problems/rotate-array/

class Solution {
public:
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
};