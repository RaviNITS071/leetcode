class MinStack {
public:
    stack<long long> st;
    long long mini;

    MinStack() {
        mini = LLONG_MAX;
    }

    void push(int value) {
        if (st.empty()) {
            st.push(value);
            mini = value;
        } else {
            if (value >= mini) {
                st.push(value);
            } else {
                st.push(2LL * value - mini);   // 2LL prevents overflow
                mini = value;
            }
        }
    }

    void pop() {
        if (st.empty()) return;

        long long x = st.top();
        st.pop();

        if (x < mini)
            mini = 2LL * mini - x;

        if (st.empty())
            mini = LLONG_MAX;
    }

    int top() {
        if (st.top() >= mini)
            return (int)st.top();
        return (int)mini;
    }

    int getMin() {
        return (int)mini;
    }
};