
class MinStack {
public:
    vector<pair<int,int>> st;
    

    MinStack() {
    }

    void push(int value) {
        if(st.empty()){
            st.push_back({value,value});
        }else{
            int mn = min(st.back().second,value);
            st.push_back({value,mn});
        }
    }

    void pop() {
        st.pop_back();
    }

    int top() {
        return st.back().first;
    }

    int getMin() {
        return st.back().second;
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