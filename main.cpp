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
        catch (std::exception) {
            functionCode = i;
            break;
        }
    }

    cin >> param1;
    cin >> param2;

    
    LinkedList linkedList(list, index);


    linkedList.printItems();

    return 0; 
}