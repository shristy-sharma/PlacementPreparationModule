#include <queue>
class Stack {
	// Define the data members.
queue<int> q1;
    queue<int> q2;
    int s;
   public:
    Stack() {
        // Implement the Constructor.
        s=-1;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q1.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return q1.empty();
    }

    void push(int ele) {
        // Implement the push() function.
        q2.push(ele);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }

    int pop() {
        // Implement the pop() function.
        if(!q1.empty())
        {  int x=q1.front();
        q1.pop();
       return x;
        }
        return -1;
    }

    int top() {
        // Implement the top() function.
        if(!q1.empty())
        return q1.front();
        return -1;
    }
};