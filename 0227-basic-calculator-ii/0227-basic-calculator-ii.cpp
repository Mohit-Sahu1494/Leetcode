class Solution {
public:

    int precedence(char op){
        if(op == '+' || op == '-') return 1;
        if(op == '*' || op == '/') return 2;
        return 0;
    }

    void solve(stack<int>& value, stack<char>& op){
        int val2 = value.top();
        value.pop();

        int val1 = value.top();
        value.pop();

        char oper = op.top();
        op.pop();

        if(oper == '+')
            value.push(val1 + val2);
        else if(oper == '-')
            value.push(val1 - val2);
        else if(oper == '*')
            value.push(val1 * val2);
        else
            value.push(val1 / val2);
    }

    int calculate(string s) {

        stack<int> value;
        stack<char> op;

        for(int i = 0; i < s.size(); i++){

            if(s[i] == ' ')
                continue;

            // number
            if(s[i] >= '0' && s[i] <= '9'){

                int num = 0;

                while(i < s.size() &&
                      s[i] >= '0' && s[i] <= '9'){

                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                value.push(num);
                i--;
            }

            // operator
            else{

                while(!op.empty() &&
                      precedence(op.top()) >= precedence(s[i])){

                    solve(value, op);
                }

                op.push(s[i]);
            }
        }

        while(!op.empty()){
            solve(value, op);
        }

        return value.top();
    }
};