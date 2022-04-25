#include "Musica.hpp"

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

class listaMusica {
    nodo* ptr = NULL;
    nodo* ult = NULL;
    int cantidad = 0;

public:
    void unirNodos();
    void insertarCancion(cancion x);
    bool listaVacia();
    cancion obtener(int pos);
    void eliminarCancion(string nombre);
    cancion siguiente(int id);
    cancion anterior(int id);
    void mostrar();

};

