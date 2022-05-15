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
    bool param1Entered = false;
    int param2;
    bool listValue = true;
    string temp = "";
    string line;

    getline(cin, line);

    for (int i = 0; i < line.length(); i++) {
        if (line[i] == ' ') {
            // check if temp is a number 
            if (!temp.empty() && temp.find_first_not_of("0123456789") == std::string::npos && listValue) {
                int num = stoi(temp);
                list[index] = num;
                index++;
                temp = "";
            }
            else if (!temp.empty() && temp.find_first_not_of("0123456789") == std::string::npos && !listValue) {
                if (!param1Entered) {
                    cout << "temp1: " << temp << endl;
                    param1 = stoi(temp);
                    param1Entered = true;
                    temp = "";
                }
                else {
                    cout <<"temp " << temp << endl;
                    param2 = stoi(temp);
                }
            }
            else {
                functionCode = temp;
                temp = "";
                listValue = false;
            }
        }
        else {
            temp = temp + line[i];
        }
    }    
  
 
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