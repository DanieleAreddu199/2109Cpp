#include <iostream>
using namespace std;

int main() {
    float x, y, z, v, media;
    cout<<"Inserisci il primo numero: \t";
    cin>>x;
    cout<<"Inserisci il secondo numero: \t";
    cin>>y;
    cout<<"Inserisci il terzo numero: \t";
    cin>>z;
    cout<<"Inserisci il quarto numero \t" ;
    cin>>v;
    media=(x+y+z+v)/4;
    cout<<"La media dei quattro numeri e': \t"<<media<<endl;
    return 0;
}