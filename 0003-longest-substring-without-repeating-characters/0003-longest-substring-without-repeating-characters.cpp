class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> ans;

        int count = 0;
        int maxLength = 0;

        for (int j = 0; j < s.length(); j++) {

            while (ans.count(s[j])) {
                ans.erase(s[count]);
                count++;
            }

            ans.insert(s[j]);

            maxLength = max(maxLength, j - count + 1);
        }

        return maxLength;
    }
};