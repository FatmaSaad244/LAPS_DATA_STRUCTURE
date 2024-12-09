#include <iostream>
#include "D:\ITI\7-Data_Structure_and_Algorithms\Lap4_GETMAXDEPTH\include\Tree.h"
using namespace std;

int main()
{
    Tree tr;
    tr.add(20);
    tr.add(50);
    tr.add(30);
    tr.add(40);
    tr.add(70);
    tr.add(90);
    tr.add(10);
    tr.add(99);

    cout << "Maximum Depth of the Tree: " << tr.getMaxDepth(tr.root) << endl;
    return 0;
}
