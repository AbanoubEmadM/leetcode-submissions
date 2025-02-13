class Solution {
public:
    bool IsPair(char open , char close)
{
	if (open == '(' && close == ')')
		return true;

	else if (open == '{' && close == '}')
		return true;

	else if (open == '[' && close == ']')
		return true;

	return false;

}

bool isValid(string exp)
{
    stack<char> s;

    for (size_t i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
                s.push(exp[i]);
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (s.empty() || !IsPair(s.top(), exp[i]))
                return false;
            else
                s.pop();
        }
    }
    return s.empty();
}

};
