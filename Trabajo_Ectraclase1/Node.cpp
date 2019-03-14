#include <iostream>
#include <stdlib.h>
#include "Node.h"

using  namespace std;

Node::Node(int _data, Node* _next){
    this->data = _data;
    this->next = _next;
}

int Node:: getData(){
    cout<<"El dato es "<<data<<endl;
    return data;
}

void Node:: setData(int _data){
    data = _data;

    cout<<"Se cambio el dato del nodo"<<endl;
}

void* Node:: operator new(size_t _size){
    Collector *_c= Collector::getInstance();
    return _c->newNode(_size);

}

void Node:: operator delete(void *memory){
    Collector *_c= Collector::getInstance();
    _c->collectNode(memory);
}