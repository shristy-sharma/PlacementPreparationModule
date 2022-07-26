class Queue {
    int ar[10000];
        int size;
    int f,r;
public:
    Queue() {
        // Implement the Constructor
        size=10000001;
        f=0,r=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(f==r)
            return true;
        else return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(r+1==f || (r==size && f==0))
            return;
        else
        {
            ar[r]=data;
            r++;
        }
        
    }

    int dequeue() {
        // Implement the dequeue() function
        if(f==r)
            return -1;
        else{
            int x=ar[f];
            f=(f+1)%size;
            return x;
        }
    }

    int front() {
        // Implement the front() function
        if(f==r)
            return -1;
        else
            return ar[f];
    }
};