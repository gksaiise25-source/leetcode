

class MinStack {
public:
    vector<int> st;
    vector<int> mn;
    int topp;

    MinStack() {
        topp = -1;
    }

    void push(int value) {
        st.push_back(value);
        topp++;

        if (mn.empty() || value <= mn.back()) {
            mn.push_back(value);
        }
    }

    void pop() {
        if (topp == -1) {
            return;
        }
        if (st[topp] == mn.back()) {
            mn.pop_back();
        }

        st.pop_back();
        topp--;
    }

    int top() {
        return st.back();
    }

    int getMin() {
        return mn.back();
    }
};


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */