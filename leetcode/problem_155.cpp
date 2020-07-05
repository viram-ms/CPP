class MinStack {
public:
    /** initialize your data structure here. */
    
    vector<int> res;  
    
    MinStack() {
           
    }
    
    void push(int x) {
      res.push_back(x);  
    }
    
    void pop() {
        res.pop_back();
    }
    
    int top() {
        return res[res.size() - 1];
    }
    
    int getMin() {
        return *min_element(res.begin(),res.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */