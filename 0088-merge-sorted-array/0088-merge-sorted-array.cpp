class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {

        int i = 0;
        int j = 0;
        int k = m - 1;   // Last valid element of a

        while (i <= k && j < n) {
            if (a[k] > b[j]) {
                swap(a[k], b[j]);
                k--;
                j++;
            } else {
                break;
            }
        }

        // Sort only the valid part of a
        sort(a.begin(), a.begin() + m);

        // Sort b
        sort(b.begin(), b.end());

        // Copy b into a
        for (int x = 0; x < n; x++) {
            a[m + x] = b[x];
        }
    }
};