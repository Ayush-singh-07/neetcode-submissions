class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        unordered_map<int, int> mp;
        for (auto i : s) {
            mp[i]++;
        }

        for (auto i : t) {
            if (mp.find(i) != mp.end() && mp[i] != 0) {
                mp[i]--;
                continue;
            } else {
                return false;
            }
        }

        return true;
    }
};
