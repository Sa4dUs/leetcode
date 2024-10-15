// https://leetcode.com/problems/merge-sorted-array/

class Solution {
private:
    int custom_insert(vector<int>& arr, int e, int start, int lsi) {
        int i = start;
        

        while (arr[i] < e && i <= lsi)
            ++i;

        int out = i;

        int aux = e;

        while (i <= lsi) {
            int aux2 = arr[i];
            arr[i] = aux;
            aux = aux2;
            ++i;
        }
        arr[i] = aux;

        return out - 1;
    }

public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int lsi = m - 1;
        int start = 0;

        while (n--) {
            start = custom_insert(nums1, nums2[n], start, lsi);
            ++lsi;
        }
    }
};