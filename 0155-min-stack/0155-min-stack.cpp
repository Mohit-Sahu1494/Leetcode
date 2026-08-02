class MinStack {
public:
    stack<long long> st;
    long long mini;

    MinStack() {
    }

    void push(int value) {
        if (st.empty()) {
            st.push(value);
            mini = value;
        }
        else if (value < mini) {
            st.push(2LL * value - mini);

            mini = value;
        }
        else {
            st.push(value);
        }
    }

    void pop() {
        if (st.empty()) return;

        long long topValue = st.top();
        st.pop();

        if (topValue < mini) {
            // recover old minimum
            mini = 2 * mini - topValue;
        }
    }

    int top() {
        if (st.top() < mini) {
            return (int)mini;
        }

        return (int)st.top();
    }

    int getMin() {
        return (int)mini;
    }
};