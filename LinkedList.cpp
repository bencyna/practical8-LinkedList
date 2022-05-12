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
    head = new Node(list[0], this->head);
    Node *prevNode = head;

    for (int i = 1; i < size; i++) {
        Node* node = new Node(list[i], this->head);
        prevNode->setNext(node);
    }
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
    int currentPosition = 0;
    while (currentNode->getData() != item && currentNode->getNext()) {
        currentNode = currentNode->getNext();
        currentPosition++;
    }

    if (currentNode->getData() == item) {
        currentPosition++;

        cout << currentPosition << endl;

        return currentPosition;
    }

    cout << 0 << endl;

    return 0;
    
}

void LinkedList::deleteFront() {

}

void LinkedList::deleteEnd() {

}

void LinkedList::deletePosition(int position) {

}

int LinkedList::getItem(int position) {
    return position;
}

void LinkedList::printItems() {

}

LinkedList::~LinkedList() {

}
