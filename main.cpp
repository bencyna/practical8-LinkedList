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
        int num = stoi(i);
        if (num)    {
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


    LinkedList linkedList(list, 100);


    linkedList.printItems();

    return 0; 
}