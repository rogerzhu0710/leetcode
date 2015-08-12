class Queue {
public:
    void push(int x) {
        s.push(x);
    }

    void pop(void) {
        if(!empty())
        {
           int size = s.size();
           stack<int> tmpStack;
           for(int i=0;i<size;i++)
           {
             tmpStack.push(s.top());
             s.pop();
           }
           tmpStack.pop();
           while(!tmpStack.empty())
           {
               s.push(tmpStack.top());
               tmpStack.pop();
           }
        }
    }

    int peek(void) {
        if(!empty())
        {
           int size = s.size();
           stack<int> tmpStack;
           for(int i=0;i<size;i++)
           {
             tmpStack.push(s.top());
             s.pop();
           }
           int value = tmpStack.top();
           while(!tmpStack.empty())
           {
               s.push(tmpStack.top());
               tmpStack.pop();
           }
           return value;
        }
    }

    bool empty(void) {
        return s.empty();
    }
private:
    stack<int> s;
};