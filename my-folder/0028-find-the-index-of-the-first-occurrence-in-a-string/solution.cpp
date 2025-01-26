class Solution {
public:
    int strStr(string haystack, string needle) {
        int occurrence = haystack.find(needle) != string::npos ? haystack.find(needle) : -1;

        return occurrence;

    }
};
