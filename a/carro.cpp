#include "carro.h"

using namespace std;

Carro::Carro(string t) : tipo(t) {}

string Carro::getTipo() const{
    return tipo;
}

void Carro::setTipo( string t){
    tipo = t;
}
