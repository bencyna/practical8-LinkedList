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

     while (cin >> i) {
        //  Check for integer found here https://stackoverflow.com/questions/4654636/how-to-determine-if-a-string-is-a-number-with-c
        if (!i.empty() && i.find_first_not_of("0123456789") == string::npos) {
            int num = stoi(i);
            list[index] = num;
            index++;
        }
        else {
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
        cout << "functione called";
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