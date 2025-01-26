class Solution {
public:
    int romanToInt(string s) {
    int res = 0;
    int n = s.length();
    unordered_map<char, int> romanToIntMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    for (int i = 0; i < n; i++) {
        if (i + 1 < n && romanToIntMap[s[i]] < romanToIntMap[s[i+1]])
        {
            res += romanToIntMap[s[i+1]] - romanToIntMap[s[i]];
            i++;
        }
        else
            res += romanToIntMap[s[i]];
    }
    return res;
    }
};
