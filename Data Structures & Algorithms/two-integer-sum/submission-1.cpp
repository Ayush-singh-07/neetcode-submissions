class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum = 0;

        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int res = target - nums[i];
            if (mp.find(res) != mp.end() && i != mp[res]) {
                return {i, mp[res]};
            }
        }
    }
};
