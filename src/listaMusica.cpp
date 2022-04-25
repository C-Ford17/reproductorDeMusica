#include "listaMusica.hpp"

void listaMusica::unirNodos() {
    if (ptr != NULL) {
        ult->sig = ptr;
        ptr->ant = ult;
    }
}

void listaMusica::insertarCancion(cancion x) {
    nodo* nuevo = new nodo(x);
    if (listaVacia())
        ptr = ult = nuevo;
    else {
        ult->sig = nuevo;
        nuevo->ant = ult;
        ult = nuevo;
    }
    unirNodos();
    cantidad++;
}

bool listaMusica::listaVacia() {
    return ptr == NULL;
}

cancion listaMusica::obtener(int pos) {
    if (!listaVacia()) {
        if (pos < cantidad) {
            nodo* p = ptr;
            int n = 0;
            do {
                if (n == pos) {
                    return p->dato;
                }
                p = p->sig;
                n++;
            } while (p != ptr && n < cantidad);
        }
    }
}

void listaMusica::eliminarCancion(int id) {
    if (!listaVacia()) {
        // if (ptr->dato.id == id) {
        //     nodo* p = ptr;
        //     ult->sig = ptr->sig;
        //     ptr->sig->ant = ult;
        //     ptr = ptr->sig;
        //     delete p;
        //     cantidad--;
        // }
        // else if (ult->dato.id == id) {
        //     nodo* p = ult;
        //     ult->ant->sig = ptr;
        //     ptr->ant = ult->ant;
        //     ult = ult->ant;
        //     delete p;
        //     cantidad--;
        // }
        // else {
        nodo* p = ptr;
        do {
            if (p->dato.id == id) {
                cantidad--;

                if (p == p->sig) {
                    ptr = ult = NULL;
                    delete p;
                    return;
                }

                p->ant->sig = p->sig;
                p->sig->ant = p->ant;

                if (p == ptr) ptr = ptr->sig;
                if (p == ult) ult = ult->ant;

                delete p;
                return;
            }
            p = p->sig;
        } while (p != ptr);
        // }
    }
}

cancion listaMusica::siguiente(int id) {
    if (!listaVacia()) {
        nodo* p = ptr;
        do {
            if (p->dato.id == id)
                return p->sig->dato;
            p = p->sig;
        } while (p != ptr);
    }
}

cancion listaMusica::anterior(int id) {
    if (!listaVacia()) {
        nodo* p = ptr;
        do {
            if (p->dato.id == id)
                return p->ant->dato;
            p = p->sig;
        } while (p != ptr);
    }
}

void listaMusica::mostrar() {
    if (!listaVacia()) {
        nodo* p = ptr;
        do {
            p->dato.toString();
            p = p->sig;
        } while (p != ptr);
    }
}