#ifndef CARRO_H
#define CARRO_H


#include <string>
#include <iomanip>
#include "veiculo.h"

using namespace std;

class Carro : public veiculo {

    private:

    string tipo; //SUV, esportivo.

    public:

    Carro(string tipo = "N");

    string getTipo() const;
    void setTipo(string tipo);

};
#endif
