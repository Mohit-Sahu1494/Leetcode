class MyQueue {
public:
  stack<int> out;
  stack<int> in;
    MyQueue() {
        
    }
    
    void push(int x) {
      in.push(x);
    }
    
    int pop() {
      peek();
      int data = out.top();
      out.pop();
        return data;
    }
    
    int peek() {
       if(out.empty()){
          while(!in.empty()){
              out.push(in.top());
              in.pop();
          }
       }
       return out.top();
    }
    
    bool empty() {
     return out.empty() && in.empty();
    }
};