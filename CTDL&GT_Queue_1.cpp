onst int MAX = 100; // s? ph?n t? t?i da trong hàng d?i

class Queue {
private:
    int a[MAX]; // m?ng ch?a các ph?n t? trong hàng d?i
    int front, rear; // ch? s? d?u và cu?i c?a hàng d?i
public:
    Queue() {
        front = rear = -1; // kh?i t?o hàng d?i r?ng
    }
    bool isEmpty() {
        return front == -1 && rear == -1;
    }
    bool isFull() {
        return (rear + 1) % MAX == front;
    }
    void enqueue(int x) {
        if (isFull()) {
            cout << "Hang doi day!\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX;
        }
        a[rear] = x;
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Hang doi rong!\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
    int getFront() {
        if (isEmpty()) {
            cout << "Hang doi rong!\n";
            return -1;
        }
        return a[front];
    }
};
