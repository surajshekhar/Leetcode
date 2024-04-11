class MyQueue {
public:
    stack<int>s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        //if(s2.empty())
        s1.push(x);

    }
    
    int pop() {
        if(s2.empty()==false){
            int aux=s2.top();
            s2.pop();
            return aux;
        }
        while(s1.empty()==false){
            s2.push(s1.top());
            s1.pop();

        }
        int aux=s2.top();
        s2.pop();
        return aux;
    }
    
    int peek() {
        if(s2.empty()==false){
            int aux=s2.top();
            
            return aux;
        }
        while(s1.empty()==false){
            s2.push(s1.top());
            s1.pop();

        }
        int aux=s2.top();
        
        return aux;
    }
    
    bool empty() {
        return s1.empty()&& s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */