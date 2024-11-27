#ifndef QUEUE_H
#define QUEUE_H
using namespace std;
class Queue {
private:
    int* Q;
    int Front;
    int Rear;
    int MaxSize;
public:
    Queue(int size) {
        Front = -1;
        Rear= -1;
        MaxSize = size;
        Q = new int[MaxSize];
    }

    ~Queue() {
        delete[] Q;
    }

    bool IsFull() {
        return (Rear +1) % MaxSize == Front; // Circular queue full condition
    }

    bool IsEmpty() {
        return Front == Rear; // Queue is empty when Head equals Tail
    }

    int DeQueue() {
        if (IsEmpty()) {
            return -1;
        }
        int value = Q[Front];
        Front = (Front + 1) % MaxSize; // Circular queue dequeue logic
        return value;
    }

    int GetFront(){
        if (IsEmpty()) {
            return -1;
        }
        int value = Q[Front];
        return value;
    }

    int GetRear(){
        if (IsEmpty()) {
            return -1;
        }
        int value = Q[Rear];
        return value;
    }

    void EnQueue(int value) {
        if (IsFull()) {
                cout<<"FULL"<<endl;
            return;
        }
        if(Front==-1)
        {
            Front=Rear;
        }
        Rear = (Rear + 1) % MaxSize;
        Q[Rear] = value;
    }

    void Display() {
        if (IsEmpty()) {
            return;
        }
        cout << "Queue elements: ";
        int i = Front;
        do {
            cout << Q[i] << " ";
            i = (i + 1) % MaxSize; // Move to the next index
        } while (i != (Rear + 1) % MaxSize);
        cout << endl;
    }
};
#endif // QUEUE_H
