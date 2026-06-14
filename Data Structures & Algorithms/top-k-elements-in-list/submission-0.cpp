class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        // Count frequencies
        for (int num : nums) {
            freq[num]++;
        }

        // Bucket: index = frequency
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto& p : freq) {
            bucket[p.second].push_back(p.first);
        }

        vector<int> result;

        // Traverse frequencies from highest to lowest
        for (int i = bucket.size() - 1; i >= 0 && result.size() < k; i--) {
            for (int num : bucket[i]) {
                result.push_back(num);
                if (result.size() == k)
                    return result;
            }
        }

        return result;
    }
};