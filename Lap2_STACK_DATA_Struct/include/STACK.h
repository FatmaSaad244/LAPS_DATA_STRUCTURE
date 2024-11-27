#include "Node.h"
#ifndef STACK_H
#define STACK_H
using namespace std;

class Stack
{
    private:
        Node* top;
    public:
        Stack() {
            top=NULL;
        }
        bool isEmpty(){
            if(top == NULL){
                return 1;
            }
            return 0;
        }

        int push(int data){
            Node * node = new Node(data);
            node->Next=top;
            top=node;
            return 1;
        }

        int pop(){
         if(isEmpty()){
            return -1;
         }
         Node* temp = top;
         top = top->Next;
         delete temp;
        }


        int peek() {
        if (isEmpty()) {
            return -1;
        }
        return top->Data;
        }


        void display() {
        if (isEmpty()) {
            return;
        }
        Node* current = top;
        int i=0;
        while (current != NULL) {
            cout <<"Data of element["<<i<<"]"<< current->Data<<endl;
            current = current->Next;
            i++;
        }
        cout << endl;
        }
        ~Stack() {
            while(!isEmpty()){
                pop();
            }
            top=NULL;
        }

    protected:

};

#endif // STACK_H
