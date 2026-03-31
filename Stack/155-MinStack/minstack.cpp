//Problem 155

class MinStack {
public:
    stack<int> st1;
    stack<int> st2;
    MinStack() {
        
    }
    
    void push(int val) {
      //  int ans=val;
        st1.push(val);
        if(st2.empty()) st2.push(val);
        else if(val>st2.top()){
            st2.push(st2.top());
        }
        else{
            st2.push(val);
        }
    }
    
    void pop() {
        //int ans=st.top();
        st1.pop();
        st2.pop();
      //  return ans;        
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
};
