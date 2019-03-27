
#include "veiculo.h"

using namespace std;

class Barco : public veiculo {

    private:

        int cap_carga;

    public:

        Barco(int cap_carga = 0);
        int getCap_carga() const;
        void setCap_carga(int cap_carga);

};
