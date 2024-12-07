#ifndef NODE_H
#define NODE_H

///template <class T>
class Node
{
    public:
        Node* Next;
        Node* Prev;
        int Data;

        Node(int data){
            Data=data;
            Next=Prev=NULL;
        }

};

#endif // NODE_H
