#include "listaMusica.hpp"

int main() {
    listaMusica chrisplay;
    cancion c1 = { "Beggin'","Maneskin","Chosen",1 };
    cancion c2 = { "Why Worry","Set it off","Duality",3 };
    cancion c3 = { "Enemy","Imagine Dragons","Arcane",7 };
    
    chrisplay.insertarCancion(c1);
    chrisplay.insertarCancion(c2);
    chrisplay.insertarCancion(c3);

    chrisplay.eliminarCancion(1);
    chrisplay.eliminarCancion(3);
    chrisplay.eliminarCancion(7);

    chrisplay.mostrar();

    return 1;
}
