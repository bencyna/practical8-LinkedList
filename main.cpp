#include <iostream>

#include "Node.h"
#include "LinkedList.h"


using namespace std;

int main() {
    //78
    int list[5] = {1, 2, 3, 4, 5};

    LinkedList linkedList(list, 5);
    linkedList.deletePosition(6);


    linkedList.printItems();

    return 0; 
}