
#include <string>
#include <iomanip>
#include "veiculo.h"

using namespace std;

class Carro : public veiculo {

    private:

    string tipo; //SUV, esportivo.

    public:

    Carro(string tipo = "tipo");

    string getTipo() const;
    void setTipo(string tipo);

};
