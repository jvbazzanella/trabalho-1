#ifdef CARRO_H
#define CARRO_H
#include <string>
#include <iomanip>
#include "veiculo.h"

class Carro : public veiculo {

    private:     
    
    string tipo; //SUV, esportivo.

    public:

    Carro(string tipo = "tipo");

    string getTipo() const;
    void setTipo(string tipo);

};
#endif