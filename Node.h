#ifndef NODE_H
#define NODE_H

#pragma once

class Node
{
public:
    Node();
    int getData();
    void setData(int data);
    int * getNext();
    void setNext(int*next);

private:
    int data;
    int * next;

};

#endif