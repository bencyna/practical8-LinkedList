#include <iostream>
#include "LinkedList.h"
#include "Node.h"
#include <cstddef>

using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
}

LinkedList::LinkedList(int list[100], int size)
{

}


void LinkedList::addFront(int newItem) {
    Node* node = new Node(newItem, this->head);
    head = node;
}

void LinkedList::addEnd(int newItem) {
    Node* node = new Node(newItem, this->head);

}

void LinkedList::addAtPosition(int position, int newItem) {
  
}

int LinkedList::search(int item) {
    Node * currentNode = this->head;
    int currentPosition = 1;
    while (currentNode->getData() != item) {
        currentNode = currentNode->getNext();
        currentPosition++;
    }

    cout << currentPosition << endl;

    return currentPosition;
}

void LinkedList::deleteFront() {

}

void LinkedList::deleteEnd() {

}

void LinkedList::deletePosition(int position) {

}

int LinkedList::getItem(int position) {

}

void LinkedList::printItems() {

}

LinkedList::~LinkedList() {

}
