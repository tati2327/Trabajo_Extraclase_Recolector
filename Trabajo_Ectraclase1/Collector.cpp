#include "Collector.h"
#include "Node.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

Collector* Collector:: instanceCollector = nullptr;

Collector::Collector() {

}

void* Collector::newNode(size_t _size){
    if(collectorFirst == nullptr){
        int *dir = (int *) malloc(_size);
        cout<<"Se creó un nuevo espacio de memoria"<<endl;
        return dir;
    } else{
        Node *dir = collectorFirst;
        dir->next= nullptr;
        collectorFirst = collectorFirst->next;
        cout<<"El espacio de memoria a retornar es un nodo reutilizado: "<<dir<<endl;
        return dir;
    }
}

void Collector:: collectNode(void *_node){
    if(collectorFirst == nullptr){
        collectorFirst = (Node*)_node;
        collectorFirst->next = nullptr;
    }else{
        Node* _node = collectorFirst;
        _node -> next= collectorFirst;
        collectorFirst = _node;
    }

    cout<<"Se recicló el nodo "<<collectorFirst->data<<endl;
}

Collector* Collector:: getInstance() {

    if(instanceCollector == nullptr){
        instanceCollector =  new Collector();
        cout<<"Se creó una instancia de collector"<<endl;
    }
    return instanceCollector;
}