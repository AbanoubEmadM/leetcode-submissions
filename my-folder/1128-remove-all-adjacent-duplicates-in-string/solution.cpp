class Solution {
public:
    string removeDuplicates(string s) {
          stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (st.empty()) {
            st.push(s[i]);
            continue;
        }
        if (s[i] == st.top()) {
            st.pop();
        }
        else {
            st.push(s[i]);
        }
    }
    string word = "";
    while (!st.empty()) {
        word += st.top();
        st.pop();
    }
    reverse(word.begin(), word.end());
    return word;
    }
}; 
