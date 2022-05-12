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
    head = new Node(list[size-1], NULL);

    for (int i = size-2; i >= 0; i--) {
        Node* node = new Node(list[i], NULL); 
        node->setNext(head); 
        head = node; 
    }
}


void LinkedList::addFront(int newItem) {
    Node* node = new Node(newItem, this->head);
    head = node;
}

void LinkedList::addEnd(int newItem) {
    Node * currentNode = head;
    while (currentNode->getNext() != NULL) {
        currentNode = currentNode->getNext();
    }
    Node* node = new Node(newItem, NULL);
    currentNode->setNext(node);
}

void LinkedList::addAtPosition(int position, int newItem) {
  if (position <= 1) {
      this->addFront(newItem);
  }

  int index = 0;

  Node * currentNode = head;
  Node * prevNode = NULL;


  while (currentNode != NULL) {
      if (index == position-1) {
          Node* newNode = new Node(newItem, currentNode);
          prevNode->setNext(newNode);
          return;
      }

      prevNode = currentNode;
      currentNode = currentNode->getNext();
      index++;
  }

  this->addEnd(newItem);
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
    Node * nextHead = head->getNext();
    delete head;
    head = nextHead;
}

void LinkedList::deleteEnd() {
    Node * currentNode = head;
    Node * prevNode = NULL;
    while (currentNode->getNext() != NULL) {
        prevNode = currentNode;
        currentNode = currentNode->getNext();
    }

    prevNode->setNext(NULL);
    delete currentNode;
}

void LinkedList::deletePosition(int position) {
    if (position < 1) {
        cout << "outside range" << endl;
        return;
    }
    if (position == 1) {
        this->deleteFront();
        return;
    }

    int index = 0;

    Node * currentNode = head;
    Node * prevNode = NULL;


    while (currentNode != NULL) {
        if (index == position-1) {
            prevNode->setNext(currentNode->getNext());
            delete currentNode;
            return;
        }

        prevNode = currentNode;
        currentNode = currentNode->getNext();
        index++;
    }
    cout << "outside range" << endl;
}

int LinkedList::getItem(int position) {
    
    if (position < 1) {
        cout << "std::numeric_limits < int >::max() " << endl;
        return 0;
    }

    int index = 0;

    Node * currentNode = head;
    Node * prevNode = NULL;


    while (currentNode != NULL) {
        if (index == position-1) {
            int data = currentNode->getData();
            cout << data << endl;
            return  data;
        }

        prevNode = currentNode;
        currentNode = currentNode->getNext();
        index++;
    }
    cout << "std::numeric_limits < int >::max() " << endl;

    return 0;
}

void LinkedList::printItems() {
    Node * currentNode = this->head;
    while (currentNode) {
        cout << currentNode->getData();
        currentNode = currentNode->getNext();
    }
}

LinkedList::~LinkedList() {
    // deletes each one by 1
}
