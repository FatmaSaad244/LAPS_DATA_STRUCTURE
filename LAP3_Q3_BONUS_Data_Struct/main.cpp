#include <iostream>
#include "D:\ITI\7-Data_Structure_and_Algorithms\LAP3_Q3_BONUS_Data_Struct\include\LinkedList.h"
using namespace std;
int main() {
LinkedList LL;
LL.add(4);
LL.add(3);
LL.add(1);
LL.add(0);
cout<<"List BEFORE EDIT"<<endl;
LL.display();
LL.bubbleSort();
cout<<"List after EDIT"<<endl;
LL.display();
return 0;



}
