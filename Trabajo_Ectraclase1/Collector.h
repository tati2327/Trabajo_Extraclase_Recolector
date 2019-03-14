class Node;
#ifndef TRABAJO_ECTRACLASE1_COLLECTOR_H
#define TRABAJO_ECTRACLASE1_COLLECTOR_H
#include <cstdlib>

/*!
 * clase Collector.
 * Se encarga de reciclar la memoria usada para almacenar nodos, guardandola en su propia lista enlazada.
 */
class Collector {

    private:
        /*!
         * Constructor privado de la clase Collector
         */
        Collector();
        static Collector *instanceCollector;/*!<Instancia estático de la clase Collector */

    public:
    //Atributos
        Node *collectorFirst = nullptr;/*!<Puntero que almacena la primera posicion de la lista de Collector */

    //Metodos
        /*!
         * newNode.
         * Verifica si la lista de collector tiene nodos reciclados y sino reserva un nuevo espacio de memoria
         *
         * @param _size
         * @return un puntero de tipo void*
         */
        void* newNode(size_t _size);

        /*!
         * collectNode.
         * Recibe un nodo por referencia y lo recicla, añadiendolo a la lista Collector
         *
         * @param _node
         */
        void collectNode(void *_node);

        /*!
         * getInstance.
         * Función que incorpora el patron de diseño Singleton
         *
         * @return una instancia estática de Collector
         */
        static Collector* getInstance();
};

#endif //TRABAJO_ECTRACLASE1_COLLECTOR_H