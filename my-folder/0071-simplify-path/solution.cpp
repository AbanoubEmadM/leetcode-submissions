class Solution {
public:
    std::vector<std::string> split(const std::string& s, char delimiter) {
        std::vector<std::string> tokens;
        std::string token;
        std::stringstream tokenStream(s);

        while (std::getline(tokenStream, token, delimiter)) {
            tokens.push_back(token);
        }
        return tokens;
    }
    string simplifyPath(string path) {
        vector<string> splittedPath = split(path, '/');
        stack<string> st;
        string result = "";

        for (const auto& str : splittedPath) {
            // cout << str << " ";
            if (str != ".." && str != "." && str != "") {
                st.push(str);
            }
            if (str == "..") {
                if (!st.empty())
                    st.pop();
            }
        }
        vector<string> dirs;

        while (!st.empty()) {
            dirs.push_back(st.top());
            st.pop();
        }
        reverse(dirs.begin(), dirs.end());
        for (string& dir : dirs)
            result += "/" + dir;
        if (result.empty())
            return "/";
        return result;
    }
};
