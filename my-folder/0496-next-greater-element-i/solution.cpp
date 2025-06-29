class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            bool found = false;
            for (auto j = it + 1; j != nums2.end(); ++j) {
                if (*j > nums1[i]) {
                    result.push_back(*j);
                    found = true;
                    break;
                }
            }
            if (!found) result.push_back(-1);
        }
        return result;
    }
};

