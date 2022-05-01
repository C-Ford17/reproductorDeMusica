#include "listaMusica.hpp"
//esta funcion une los nodos ini y end
void listaMusica::unirNodos(){
	if(!isEmpty()){
        end->next=ini;
        ini->prev=end;
	}
}
//esta funcion retorna la cantidad de elementos en la lista
int listaMusica::getSize(){
    return size;
}
//esta funcion inserta canciones a la lista
void listaMusica::append(song x){
    nodo *New = new nodo(x);
    if(isEmpty())
        ini=end=New;
    else{
        end->next=New;
        New->prev=end;
        end=New;
    }
    unirNodos();
    size++;
}
//esta funcion retorna si la lista esta vacia o no
bool listaMusica::isEmpty(){
    return ini==nullptr;
}
//esta funcion retorna la cancion segun el indice
song listaMusica::get(int index){
    if(!isEmpty())
        return getNode(index)->dato;
}
//esta funcion retorna el nodo segun el indice
nodo * listaMusica::getNode(int index){
    if(!isEmpty()){
        if(index<size){
            nodo *p=ini;
            int n=0;
            do{
                if(n==index){
                    return p;
                }
                p=p->next;
                n++;
            }while(p!=ini);
        }
    }
    return nullptr;
}
//esta funcion elimina la cancion de la lista segun el indice
void listaMusica::remove(int index){
    if(!isEmpty() && getNode(index)!=nullptr){
    	nodo *n=getNode(index);
        if(ini==end && ini==n){
            ini=end=nullptr;
            delete n;
            return;
        }
	    if(ini==n){
	        n->next->prev=end;
	        end->next=n->next;
            ini=n->next;
            delete n;
            return;
        }
	    if(end==n){
	        ini->prev=n->prev;
	        n->prev->next=ini;
	        end=n->prev;
		    delete n;
            return;
		}
		else{
		    n->prev->next=n->next;
		    n->next->prev=n->prev;
		    delete n;
            return;
		}
    }
}
//esta funcion muestra los elementos de la lista
void listaMusica::print(){
    if(!isEmpty()){
        nodo *p=ini;
        int x=1;
        do{
            cout<<x<<".";p->dato.toString();
            x++;
            p=p->next;
        }while(p!=ini);
    }
}
