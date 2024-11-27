#include <iostream>
#include "STACK.h"
using namespace std;

int main()
{
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    cout << "Top element: " << stack.peek() << endl;
    stack.pop();
    stack.display();
    ///after poping one element
    cout << "Top element: " << stack.peek() << endl;
    return 0;
}
