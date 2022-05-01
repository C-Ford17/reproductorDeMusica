#include "listaMusica.hpp"

int main(){
    listaMusica chrisplay;
    int n;
    song song1,song2,song3;
    song1= {"SafeAndSound","ASDasd","XASDAS",time(0),1,false};
    song2= {"dawda","ASDasd","XASDAS",time(0),1,false};
    song3= {"SafeAndSoawdund","ASawdDasd","XAadSDAS",time(0),1,false};
    chrisplay.append(song1);
    chrisplay.append(song2);
    chrisplay.append(song3);
    chrisplay.remove(2);
    chrisplay.print();
    return 0;
}
