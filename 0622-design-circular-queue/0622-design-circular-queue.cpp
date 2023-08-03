class MyCircularQueue {
private:
    int*arr;
    int front;
    int rear;
    int Size;
    int K;
public:
    MyCircularQueue(int k) {
        arr = new int[k];
        front = -1;
        rear = -1;
        Size = 0;
        K = k;
    }
    
    bool enQueue(int value) {
        if(Size == K) return false;
        
        if(front == -1)
        {
            front = 0;
        }
        rear = (rear + 1) % K;
        arr[rear % K] = value;
        Size++;
        return true;
    }
    
    bool deQueue() {
        if(Size == 0) return false;
        
        front = (front + 1) % K;
        Size--;
        return true;
    }
    
    int Front() {
        if(Size != 0) return arr[front];
        
        else return -1;
    }
    
    int Rear() {
        if(Size != 0) return arr[rear];
        
        else return -1;
    }
    
    bool isEmpty() {
        if(Size == 0) return true;
        
        else return false;
    }
    
    bool isFull() {
        if(Size == K) return true;
        
        return false;
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