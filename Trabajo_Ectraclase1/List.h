#ifndef TRABAJO_ECTRACLASE1_LIST_H
#define TRABAJO_ECTRACLASE1_LIST_H

#include "Node.h"
#include "Collector.h"

/*!
 * Clase List.
 *
 * lista enlazada. La cual es un tipo de dato abstracto que crece de manera dinámica y
 * almacena datos en forma organizada.
 */
class List {

    public:
        Node *first = nullptr; /*! puntero que apunta al primer nodo de la lista. */

    //Metodos
        /*!
         * Constructor de la clase List.
         */
        List();
        /*!
         * insertNode.
         * Método que inserta un nuevo nodo en la lista, ya sea en un espacio nuevo de memoria o en uno reciclado.
         *
         * @param _data es de tipo integer y es el dato que almacenará el nuevo nodo.
         */
        void insertNode(int _data);

        /*!
         * deleteNode.
         * Busca un nodo con un dato n en la lista enlazada, lo retira de la lista y lo pasa a la lista del Collector
         * para reciclar ese espacio de memoria
         *
         * @param n
         */
        void deleteNode(int n);

        /*!
         * getFirst.
         *
         * @return el primer elemento de la lista
         */
        int getFirst();

        /*!
         * setFirst
         * Función para modificar el dato del primer nodo de la lista
         *
         * @param data de tipo int
         */
        void setFirst(int _data);
};

#endif //TRABAJO_ECTRACLASE1_LIST_H