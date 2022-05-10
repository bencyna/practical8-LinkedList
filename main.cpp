#include <iostream>

#include "Node.h"
#include "LinkedList.h"


using namespace std;

int main() {
    int list[3] = {1, 2, 3};

    LinkedList linkedList;

    linkedList.addFront(1);
    linkedList.addFront(3);
    linkedList.addFront(32);
    linkedList.addFront(342);

    cout << linkedList.search(2) << endl;

    return 0; 
}