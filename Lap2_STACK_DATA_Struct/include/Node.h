#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node* Next;
        int Data;

        Node(int data){
            Data=data;
            Next=NULL;
        }

};

#endif // NODE_H
