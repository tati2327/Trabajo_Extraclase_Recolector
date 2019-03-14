#include "List.h"
#include "Node.h"
#include <iostream>
#include <stdlib.h>

using  namespace std;

List::List(){
    first = (Node*)malloc(2);
    first->data=0;
    first->next= nullptr;
}

void List::insertNode(int _data){
    Node*_node = (Node*) _node->operator new(2);

    if(first->data == 0){
        first =_node;
        first->data= _data;
        first->next= nullptr;
    }else{
        _node -> next = first;
        _node -> data = _data;
        first = _node;
    }

    cout<<"Se insertó correctamente el dato "<<first->data<<" en la lista."<<endl;
}

void List::deleteNode(int n) {
    if (first->data != 0) {
        Node *auxDelete;
        Node *prev = nullptr;
        auxDelete = first;

        while ((auxDelete->data != 0) && (auxDelete->data != n)) {
            prev = auxDelete;
            auxDelete = auxDelete->next;
        }

        //No se encontró el elemento
        if (auxDelete->data == 0) {
            cout << "El elemento no existe"<<endl;
        } else if (prev == nullptr) { //El elemento es el primero de la lista
            first = first->next;
            void*temp = (void*)auxDelete;
            first->operator delete(temp);
        } else { //El elemento está en el medio o al final
            prev->next = auxDelete->next;
            first->operator delete((void*)auxDelete);
        }
    }
}

int List::getFirst() {
    cout<<"El puntero al inicio de la lista es "<<first->data<<endl;
    return first->data;
}

void List::setFirst(int _data) {
    first -> data = _data;
    cout<<"El nuevo valor de first es "<<first->data<<endl;
}