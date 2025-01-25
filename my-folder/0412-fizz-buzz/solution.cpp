class Solution {
public:
    vector<string> fizzBuzz(int n) {
        string result = "";
        vector<string> v = {};
        for (int i = 1; i <= n; i++) {
            result = "";
            if (i % 3 == 0)
              result += "Fizz";
            if (i % 5 == 0)
              result += "Buzz";
            if (result == "")
                result += to_string(i);
            v.push_back(result);
        }
    return v;
    }
};
