#ifndef VEICULO_H
#define VEICULO_H


  class veiculo{

  private:

    string marca;
    int cavalos;
    int capacidade;


  public:
    veiculo(string marca="n", int cavalos=0, int capacidade=0);

    string getMarca() const;
    int getCavalos() const;
    int getCapacidade() const;

    void setMarca(string marca);
    void setCavalos(int cavalos);
    void setCapacidade(int capacidade);
  }
#endif
