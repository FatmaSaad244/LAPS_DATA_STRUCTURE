#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
using namespace std;
///template <class T>
class LinkedList
{
    private:
        Node * head;
        Node * tail;
        Node * getNodeUsingData(int data){
        Node *current=head;
        while(current != NULL){
            if(current->Data==data){
                return current;
            }
            //Jump
            current=current->Next;
        }
        return NULL;

        }


    public:
        LinkedList() {
            head=tail=NULL;
        }
        void add(int data){
            //Create Node
            Node * node = new Node(data); //Create Object Node , Data=data , next,prev=null

                if(head == NULL){//First Node
                    head=tail=node;
                    //node->Next=node->prev=NULL;
                }
                else{//Not First Node
                    tail->Next =node; //Old->Next=NewNode
                    node->Prev=tail; //newNode->prev=old(Node)
                    tail=node;//tail=node;
                }
        }
        void display(){
            Node * current =head;//NULL
            if(current == NULL){
                cout<<"Linked List is Empty \n";
                return ;
            }
            while(current != NULL){
                //Display
                cout<<current->Data<<"\t";
                //Increment Jump Node
                current=current->Next;
            }
            cout<<endl;
        }


    void removeNode(int data){
        //Search Linked List
        Node * node = getNodeUsingData(data);
        if(node == NULL){
            cout<<"Element Not Found , Can't Remove \n";
            return;
        }
        else{
            //Remove First
            if(node == head){
                if(node == tail){
                    tail=head=NULL;
                }
                else{
                    head=node->Next;
                    head->Prev=NULL;
                }

            }
            else if (node == tail){ //Remove Last
                tail=node->Prev;
                tail->Next=NULL;
            }
            else{//Remove Mid
                Node * A=node->Prev;
                Node * B=node->Next;
                A->Next=B;
                B->Prev=A;
            }

            delete(node);

        }

    }

    void InsertAfter(int data, int afterData){
        Node * node = getNodeUsingData(afterData);
        if(node == NULL){
            cout<<"Element Not Found , Can't add after \n";
            return;
        }
        else{
            Node * added=new Node(data);
            if(node == head){ /// A(node)<<= B(next null{auto})
                if(node == tail){
                    node->Next=added;
                    added->Prev=node;
                    tail=added;
                    //automatic
                }
                else{//(head // added // 2 3 tail)
                    Node* temp=node->Next;
                    node->Next=added;
                    added->Prev=node;
                    added->Next=temp;
                    temp->Prev=added;
                }

            }
            else if (node == tail){ //1,2,3,added
                node->Next=added;
                added->Prev=node;
                added->Next=NULL;

            }
            else{//(1,2 ,3,added,4 )
                Node* temp=node->Next;
                node->Next=added;
                added->Prev=node;
                added->Next=temp;
                temp->Prev=added;
            }

        }

    }


    void InsertBefore(int data, int beforeData){
        Node * node = getNodeUsingData(beforeData);
        if(node == NULL){
            cout<<"Element Not Found , Can't add before \n";
            return;
        }
        else{
            Node * added=new Node(data);
            if(node == head){ // added ,ht
                if(node == tail){
                    node->Next=NULL;
                    node->Prev=added;
                    added->Prev=NULL;
                    added->Next=node;
                }
                else{//(added ,,, head ,, 2 3 tail)
                    node->Prev=added;
                    added->Prev=NULL;
                    added->Next=node;
                }

            }
            /*else if (node == tail){ //1,2,3,added,((tail)))
                Node* temp =node->Prev;
                added->Prev=temp;
                added->Next=tail;
                node->Prev=added;
                temp->Next=added;

            }
            else{//(1,2 ,3,added,((4))),tail )
                Node* temp =node->Prev;
                added->Prev=temp;
                added->Next=node;
                node->Prev=added;
                temp->Next=added;
            }*/
           else{
                Node* temp =node->Prev;
                added->Prev=temp;
                added->Next=node;
                node->Prev=added;
                temp->Next=added;

           }

        }

    }


    int GetCount(){
        int counter=0;
        Node * current =head;//NULL
            if(current == NULL){
                cout<<"Linked List is Empty \n";
                return 0;
            }
            while(current != NULL){
                counter=counter+1;
                current=current->Next;
            }
            return counter;
            cout<<endl;
        }


    int GetDataByIndex(int index){
        int n=0;
        Node* current=head;
            while(current != NULL){
                if(n==index)
                    return current->Data;
                current=current->Next;
                n++;

            }
            return -1;
    }


    int search_using_data(int data){
        Node * node = getNodeUsingData(data);
        if(node == NULL){
            return 0;
        }
        else{
            return 1;
        }
    }
    void swapNodes(Node* a, Node* b) {
        if (a==NULL || b==NULL| a == b)
            return;

        if (a->Prev)
            a->Prev->Next = b;
        else
            head = b;

        if (b->Next)
            b->Next->Prev = a;

        a->Next = b->Next;
        b->Prev = a->Prev;
        b->Next = a;
        a->Prev = b;
    }

    void bubbleSort() {
    if(head==NULL || head->Next==NULL)
        return;
    bool swapped;
    Node* current;
    Node* lastSorted = NULL; // Marks the end of the sorted part
    do {
            swapped = false;
            current = head;

            while (current->Next != NULL) {
                if (current->Data > current->Next->Data) {
                    swapNodes(current, current->Next);
                    swapped = true;
                } else {
                    current = current->Next;
                }
            }
            lastSorted = current;
        } while (swapped);
    }

};

#endif // LINKEDLIST_H
