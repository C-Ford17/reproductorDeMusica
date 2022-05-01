#include "Musica.hpp"

struct nodo{
    song dato;
    nodo *next;
    nodo *prev;
    nodo(song x){
        dato=x;
        next=nullptr;
        prev=nullptr;
    }
};

class listaMusica{
    nodo *ini=nullptr;
    nodo *end=nullptr;
    int size=0;

    public:
        void unirNodos();
        void append(song x);
        bool isEmpty();
        song get(int index);
        void remove(int index);
        void print();
        int getSize();
        nodo * getNode(int index);

};

