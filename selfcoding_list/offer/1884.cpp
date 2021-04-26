class CQueue {
private:
    stack<int> add1;
    stack<int>delete1;
public:
    CQueue() {

    }

    void appendTail(int value) {
        while(!delete1.empty()){
            add1.push(delete1.top());
            delete1.pop();
        }
        add1.push(value);
    }

    int deleteHead() {
        while(!add1.empty()){
            delete1.push(add1.top());
            add1.pop();
        }
        if(delete1.empty())return -1;
        int drop =delete1.top();
        delete1.pop();
        return drop;

    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */