#include <iostream>
#include <stdlib.h>
#include "List.h"

using namespace std;

int main() {
    //Instancia solo para probar la funcionalidad del Collector
    Collector* c = Collector::getInstance();

    List list;
    list.insertNode(5);
    cout<<"La posición de memoria del nodo con dato 5 en la lista es "<<list.first<<endl;

    list.insertNode(8);
    list.insertNode(3);

    list.deleteNode(5);
    cout<<"La posición de memoria del nodo con dato 5 reciclado es "<<c->collectorFirst<<endl;

    list.insertNode(9);
    cout<<"La posición de memoria del nodo con dato 9 en la lista que se reutilizo es "<<list.first<<endl;

    return 0;
}