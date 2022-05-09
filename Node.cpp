#include "Node.h"

Node::Node()
{

}

int Node::getData()
{
    return data;
}

void Node::setData(int dataInp){
    data = dataInp;
}

int * Node::getNext()
{
    return next;
}

void Node::setNext(int * next){
    this->next = next;
}