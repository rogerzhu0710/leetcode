class Stack {
public:
    void push(int x) {
        int size = q.size();
        q.push(x);
        for(int i=0;i<size;i++)
        {
            int tmp = q.front();
            q.pop();
            q.push(tmp);
        }
    }

    void pop() {
        if(!empty())
        {
            q.pop();
        }

    }

    int top() {
        if(!empty())
        {
            return q.front();
        }
    }

    bool empty() {
        return q.empty();
    }

private:
    queue<int> q;
};