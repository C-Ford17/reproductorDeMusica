#include<iostream>
using namespace std;

struct cancion {
    string nombre;
    string autor;
    string album;
    int id;
    void toString() {
        cout << " nombre: " << nombre << " autor: " << autor << " album: " << album << "\n";
    }
};
