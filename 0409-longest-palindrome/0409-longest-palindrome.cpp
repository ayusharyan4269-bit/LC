class Solution {
public:
    int longestPalindrome(string s) {

        map<char, int> mp;
        int ans = 0;
        bool odd = false;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        for (int i = 0; i < s.size(); i++) {

            if (mp[s[i]] > 0) {

                if (mp[s[i]] % 2 == 0) {
                    ans += mp[s[i]];
                }
                else {
                    ans += mp[s[i]] - 1;
                    odd = true;
                }

                mp[s[i]] = 0;
            }
        }

        if (odd) {
            ans++;
        }

        return ans;
    }
};