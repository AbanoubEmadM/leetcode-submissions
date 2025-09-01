class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    double windowSum = 0, maxAvg = 0;
        int l = 0, r = k - 1;
        for (int i = l; i <= r; i++) {
            windowSum += nums[i];
        }
        maxAvg = windowSum / k;
        while (r + 1 < nums.size()) {
            l++;
            r++;
            windowSum += nums[r] - nums[l - 1]; // slide window
            maxAvg = max(maxAvg, windowSum / k);
        }

        return maxAvg;
    }
};
