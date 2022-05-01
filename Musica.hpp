#include<iostream>
#include<ctime>
using namespace std;

struct song{
    string titulo;
    string artista;
    string album;
    time_t update_at;
    int id;
    bool favorite;
    void toString(){
        cout<<" nombre: "<<titulo<<" autor: "<<artista<<" album: "<<album<<" fecha: "<<update_at<<"<< id: "<<id<<"\n";
    }
};
