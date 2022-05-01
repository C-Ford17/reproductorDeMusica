#include<iostream>
using namespace std;
//estructura de la cancion con sus atributos y metodo toString()
struct cancion {
    string nombre;
    string autor;
    string album;
    int id;
    void toString() {
        cout << " nombre: " << nombre << " autor: " << autor << " album: " << album << "\n";
    }
};
