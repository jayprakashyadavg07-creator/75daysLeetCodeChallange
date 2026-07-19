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
        sort(a.begin(), a.begin() + m);//a sort vayo 1,2,2,texpzi 0,0,0(1,2,2,|0,0,0) yo m ho index 3 bata sort garo) (mistek (0,0,0,1,2,2,)) so use +m

        // Sort b
        sort(b.begin(), b.end());

        // Copy b into a
        for (int x = 0; x < n; x++) {
            a[m + x] = b[x];
            //3+0 index ho  = 3 value ho
            //a[3] ma =3 rakhne[1,2,2,3(put),0,0]
        }
    }
};