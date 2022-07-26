#include <stack>
class Queue {
    // Define the data members(if any) here.
    stack<int> s1;
    stack<int> s2;
    
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        while(!s1.empty())
        { int x=s1.top();
         s1.pop();
            s2.push(x);
         
        
        }
        s1.push(val);
        while(!s2.empty())
        {
             int y=s2.top();
         s2.pop();
         s1.push(y);
        }
        
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(s1.empty())
            return -1;
        else{
            int x=s1.top();
            s1.pop();
            return x;
        }
    }

    int peek() {
        // Implement the peek() function here.
        if(!s1.empty())
        return s1.top();
        return -1;
        
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        if(s1.empty())
            return true;
        return false;
    }
};