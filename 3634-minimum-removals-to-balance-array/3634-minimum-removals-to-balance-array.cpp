class Solution {
public:
    bool check(vector<int>& nums, int k, int val) {
        int n = nums.size();
        for (int i = 0; i <= val; i++) {
            int smallest = nums[i];

            long long int largest = nums[n - 1 - val + i];
            if (largest <= k * 1LL * smallest) {
                return true;
            }
        }
        return false;
    }
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        if (nums.back() * 1LL <= k * 1LL * nums[0]) {
            return 0;
        }

        int n = nums.size();

        int low = 1;
        int high = n - 1;

        int ans = n - 1;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (check(nums, k, mid)) {
                ans = min(ans, mid);
                high = mid - 1;

            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};