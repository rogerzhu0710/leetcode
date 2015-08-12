class MinStack {
public:
    void push(int x) {
        v.push_back(x);
        if(v.size() == 1)
            m_min = x;
        else
            m_min = x<m_min?x:m_min;
    }

    void pop() {
        if(v.size()>1)
        {
            if(v[v.size()-1] == m_min)
            {
                m_min = v[0];
                for(int i=1;i<v.size()-1;i++)
                {
                    if(v[i]<m_min)
                        m_min = v[i];
                }
            }
        }
        if(v.size()==1)
            m_min = INT_MIN;
        if(v.size()!=0)
            v.pop_back();
    }

    int top() {
        if(v.size()!=0)
            return v[v.size()-1];
    }

    int getMin() {
        if(v.size()!=0)
            return m_min;
        else
            return INT_MIN;
    }
private:
    vector<int> v;
    int m_min;
};