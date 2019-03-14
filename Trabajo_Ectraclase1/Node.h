#ifndef TRABAJO_ECTRACLASE1_NODE_H
#define TRABAJO_ECTRACLASE1_NODE_H
#include "Collector.h"

/*!
 * Clase Nodo.
 *Almacena la información de cada uno de los elementos enlazados de la lista.
 */
class Node {
    friend class Collector;

    public:
        //Atributos
        int data; /*!<variable que almacena el dato del nodo. */
        Node *next; /*!<puntero que apunta al siguiente nodo en la lista enlazada. */

        //Metodos
        /*!
         * Constructor de la clase Node.
         * @param data de tipo integer.
         * @param _next de tipo Node.
         */
        Node(int data, Node* _next);

        /*!
         * getData.
         * Método que retorna el dato que almacena el nodo.
         * @return un integer.
         */
        int getData();

        /*!
         * setData.
         * Método que permite variar el dato que almacena el nodo.
         * @param _data de tipo integer.
         */
        void setData(int _data);

        /*!
         * operator new.
         * Método new sobrecargado, obtiene una instancia estática de Collector y a partir de esa instancia
         * llama al método newNode de la clase Collector.
         * @param  _size es el tamaño de espacio de memoria que se va almacenar.
         * @return un puntero de tipo void .
         */
        void* operator new(size_t _size);

        /*!
         *operator delete.
         * Método delete sobrecargado, obtiene una instancia estática de Collector y a partir de esa instancia
         * llama al metodo collectNode de la clase Collector.
         * @param memory es un puntero de tipo void.
         */
        void operator delete(void *memory);
};

#endif //TRABAJO_ECTRACLASE1_NODE_H