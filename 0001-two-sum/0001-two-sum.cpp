class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int s = 0, e = n - 1;

        while (s < e) {
            int sum = arr[s].first + arr[e].first;

            if (sum == target) {
                return {arr[s].second, arr[e].second};
            }
            else if (sum < target) {
                s++;
            }
            else {
                e--;
            }
        }

        return {};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna