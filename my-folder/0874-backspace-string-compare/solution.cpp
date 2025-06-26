class Solution {
public:
    bool backspaceCompare(string s, string t) {
            stack<char> st1, st2;
    string s1, s2;

      for (auto c : t) {
            if (c != '#') st1.push(c);
            else {
                if (!st1.empty()) st1.pop();
            }
        }
        for (auto c : s) {
            if (c != '#') st2.push(c);
            else {
                if (!st2.empty()) st2.pop();
            }
        }
        while (!st1.empty()) {
            s1 += st1.top();
            st1.pop();
        }
        while (!st2.empty()) {
            s2 += st2.top();
            st2.pop();
        }
        return s1 == s2;
    }
};
