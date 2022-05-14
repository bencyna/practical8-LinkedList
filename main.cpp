#include <iostream>

#include "Node.h"
#include "LinkedList.h"
#include <string>

using namespace std;

int main() {
    int list[100] = {};
    int index = 0;
    string functionCode;
    int param1;
    int param2;
    string i;


     while (std::cin >> i) {
         try {
            int num = stoi(i);
            list[index] = num;
            index++;
        }
        catch (std::invalid_argument const&) {
            functionCode = i;
            break;
        }
    }

    cin >> param1;
    cin >> param2;
    
    
    LinkedList linkedList(list, index);

    if (functionCode == "AF") {
        linkedList.addFront(param1);
    }
    else if (functionCode == "AE") {
        linkedList.addEnd(param1);
    }
    else if (functionCode == "AP") {
        linkedList.addAtPosition(param1, param2);
    }
    else if (functionCode == "S") {
        linkedList.search(param1);
    }
    else if (functionCode == "DF") {
        linkedList.deleteFront();
    }
    else if (functionCode == "DE") {
        linkedList.deleteEnd();
    }
    else if (functionCode == "DP") {
        linkedList.deletePosition(param1);
    }
    else if (functionCode == "GI") {
        linkedList.getItem(param1);
    }

    linkedList.printItems();

    return 0; 
}