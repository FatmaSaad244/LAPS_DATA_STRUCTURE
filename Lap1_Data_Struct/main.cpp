#include <iostream>

#include "LinkedList.h"
using namespace std;
int main()
{
    LinkedList mylist;

    mylist.add(3);
    mylist.add(5);
    mylist.add(10);
    mylist.add(3);
    mylist.add(13);
    mylist.display();// 3 5 10 3 13
    mylist.removeNode(15); //Not Found
    mylist.removeNode(3);
    mylist.display();//5 10 3 13
    mylist.removeNode(3);
    mylist.display();// 5 10 13
    mylist.removeNode(10);
    mylist.display();// 5 13
    mylist.removeNode(13);
    mylist.display();//5
    mylist.removeNode(5);
    mylist.display();//List Empty
    // Node * node=mylist.getNodeUsingData();
    // Loose Coupling ==> if change one Class Doesn't affect another Class
    mylist.add(5);
    if(!mylist.search_using_data(5)){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Found"<<endl;
    }
    ///head=tail=5
    mylist.InsertAfter(10,5);
    mylist.display();///5,,10
    ///head=5 insert after 5
    mylist.InsertAfter(100,5);
    mylist.display();///5,100,10
    ///target=10 insert after 10
    mylist.InsertAfter(7,100);
    mylist.display();///5,100,7,10
    mylist.InsertBefore(3,7);
    mylist.display();///5,100,3,7,10
    mylist.InsertBefore(4,10);
    mylist.display();///5,100,3,7,4,10
    int x=mylist.GetCount();
    cout<<"no of counter=   "<<x<<endl;
    int data=mylist.GetDataByIndex(2);
    cout<<"data in index 2 is "<<data<<endl;
    return 0;

}
