#include "LinkedList.h"
#include "Node.h"
#include <cstddef>

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

}

void LinkedList::addAtPosition(int position, int newItem) {

}

int LinkedList::search(int item) {

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
