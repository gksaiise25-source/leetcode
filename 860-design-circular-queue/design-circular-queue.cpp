class MyCircularQueue {
public:
    vector<int> v;
    int front,rear;
    int n;
    MyCircularQueue(int k) {
        front = rear = -1;
        n = k;
        v.resize(n);
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return 0;
        }
        if(isEmpty()){
            front++;
        }
        rear = (rear + 1) % n;
        v[rear] = value;
        return 1;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return 0;
        }
        if(front==rear){
            front = rear =-1;
        }else{
            front = (front+1)%n;
        }
        return 1;
    }
    
    int Front() {
        if (isEmpty()) return -1;
        return v[front];
    }
    
    int Rear() {
        if (isEmpty()) return -1;
        return v[rear];
    }
    
    bool isEmpty() {
        return front==-1;
    }
    
    bool isFull() {
        return (rear+1)%n==front && !isEmpty();
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */