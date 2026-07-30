class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> ans;

        int i = 0;
        int maxLength = 0;

        for (int j = 0; j < s.length(); j++) {

            while (ans.count(s[j])) {
                ans.erase(s[i]);
                i++;
            }

            ans.insert(s[j]);

            maxLength = max(maxLength, j - i + 1);
        }

        return maxLength;
    }
};