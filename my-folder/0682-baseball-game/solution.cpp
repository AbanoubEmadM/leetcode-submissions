class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
    int result = 0;

    for (int i = 0; i < operations.size(); i++) {
       if (operations[i] != "+" && operations[i] != "D" && operations[i] != "C") {
           st.push(stoi(operations[i]));
       }
       else if (operations[i] == "C") {
           st.pop();
       }
       else if (operations[i] == "D") {
           st.push((st.top())*2);
       }
      else if (operations[i] == "+") {
           int temp = st.top(); // 65
           st.pop();
           int sum = st.top() + temp; // -50
           st.push(temp);
           st.push(sum);
       }
    }
    while (!st.empty()) {
         result += st.top();
        st.pop();
    }
     return result;
    }
};
