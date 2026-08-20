class Node {
public:
    int val;
    Node* next;

    Node() {
        val = 0;
        next = nullptr;
    }
};

class MyCircularQueue {
private:
    Node* front;
    Node* rear;
    int size;
    int count;

public:

    MyCircularQueue(int k) {
        size = k;
        count = 0;

        front = new Node();

        Node* temp = front;

        for (int i = 1; i < k; i++) {
            temp->next = new Node();
            temp = temp->next;
        }

        temp->next = front;

        // Initially rear = last available slot
        rear = front;
    }

    bool enQueue(int value) {

        if (isFull()) {
            return false;
        }

        // Empty queue
        if (isEmpty()) {
            front->val = value;
            rear = front;
        }
        else {
            rear = rear->next;
            rear->val = value;
        }

        count++;

        return true;
    }

    bool deQueue() {

        if (isEmpty()) {
            return false;
        }

        front = front->next;
        count--;

        return true;
    }

    int Front() {

        if (isEmpty()) {
            return -1;
        }

        return front->val;
    }

    int Rear() {

        if (isEmpty()) {
            return -1;
        }

        return rear->val;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }
};