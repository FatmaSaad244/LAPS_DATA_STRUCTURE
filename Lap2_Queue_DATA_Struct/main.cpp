#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    cout << "Queue of size=5" << endl;
    Queue circularQueue(5); // Create a circular queue of size 5


    circularQueue.EnQueue(1);
    circularQueue.EnQueue(2);
    circularQueue.EnQueue(3);
    circularQueue.EnQueue(4);
    circularQueue.Display(); ///1 2 3 4

    circularQueue.DeQueue();
    cout << "Dequeued: first element" << endl;
    circularQueue.Display(); ///2 3 4
    cout << "add element equal 5"<<endl;
    circularQueue.EnQueue(5);
    circularQueue.Display(); ///2 3 4 5
    cout<<"Front value equal ... "<<circularQueue.GetFront()<<endl;
    cout<<"Rear value equal ... "<<circularQueue.GetRear()<<endl;
    cout << "add element equal 6"<<endl;
    circularQueue.EnQueue(6);
    circularQueue.Display(); ///2 3 4 5 6
    cout << "add element equal 7 Queue must be full with element=6"<<endl;
    circularQueue.EnQueue(7);
    circularQueue.Display(); ///2 3 4 5 6
    return 0;
}
