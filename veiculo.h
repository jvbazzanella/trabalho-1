#ifndef VEICULO_H
#define VEICULO_H


  class veiculo{

  private:

    string marca;
    int potencia;
    int capacidade;


  public:
    veiculo(string marca="n", int potencia=0, int capacidade=0);

    string getMarca() const;
    int getPotencia() const;
    int getCapacidade() const;

    void setMarca(string marca);
    void setPotencia(int potencia);
    void setCapacidade(int capacidade);
  }
#endif  
