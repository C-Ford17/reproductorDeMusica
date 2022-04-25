#include "Musica.hpp"
//estructura del nodo de una lista con sus atributos, punteros y constructor
struct nodo {
    cancion dato;
    nodo* sig;
    nodo* ant;
    nodo(cancion x) {
        dato = x;
        sig = NULL;
        ant = NULL;
    }
};
//clase lista circular doblemente enlazada
class listaMusica {
    nodo* ptr = NULL;
    nodo* ult = NULL;
    int cantidad = 0;

public:
    void unirNodos();
    void insertarCancion(cancion x);
    bool listaVacia();
    cancion obtener(int pos);
    void eliminarCancion(int id);
    cancion siguiente(int id);
    cancion anterior(int id);
    void mostrar();

};

